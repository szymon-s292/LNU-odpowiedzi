def pretty_print(report):
    max_len = max([len(name) for name in report.keys()])
    for name, score in report.items():
        print(f"{name:{max_len}} {score}")