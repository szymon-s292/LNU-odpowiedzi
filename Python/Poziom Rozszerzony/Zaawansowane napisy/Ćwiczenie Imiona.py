def disp_names( names ): 
    names_sorted = sorted(names, key=len)
    max_width = len(names_sorted[-1])
    for name1, name2 in zip(names_sorted, reversed(names_sorted)):
        print(f"{name1:^{max_width}}|{name2:^{max_width}}")