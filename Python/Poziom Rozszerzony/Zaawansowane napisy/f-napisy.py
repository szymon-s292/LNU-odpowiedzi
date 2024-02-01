def generate_report(points, threshold):
    return f"You passed the exam with {points} points." if points >= threshold else f"You failed the exam with {points} points."