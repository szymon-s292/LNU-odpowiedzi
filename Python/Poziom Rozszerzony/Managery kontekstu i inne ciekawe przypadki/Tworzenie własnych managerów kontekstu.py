from contextlib import contextmanager

@contextmanager
def list_builder():
    my_list = []
    try:
        yield my_list
    finally:
        print(f"list has been built with elements: {my_list}")
        
with list_builder() as new_list:
    new_list.append(1)
    new_list += [2, 3]