def print_rows(numbers):
    for i in range(0, len(numbers), 2):
        n1 = numbers[i]
        n2 = numbers[i+1]
        row = "{:<10.3%}{:.3%}".format(n1, n2)
        print(row)
