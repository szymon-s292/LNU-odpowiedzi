def count_elements(container):
    if isinstance(container, list) or isinstance(container, set) or isinstance(container, tuple):
        return len(container)
    elif isinstance(container, str):
        return len(container.split())
    elif isinstance(container, dict):
        return len(container) + sum(1 for value in container.values())

    return 0