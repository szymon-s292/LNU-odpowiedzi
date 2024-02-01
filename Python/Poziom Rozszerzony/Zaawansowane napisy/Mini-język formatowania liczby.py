def print_report(previous, current):
    if current > previous:
        growth = (current - previous) / previous * 100
        print(f"Growth by {growth:.2f}%.")
    else:
        loss = (previous - current) / previous * 100
        print(f"Loss of {loss:.2f}%.")