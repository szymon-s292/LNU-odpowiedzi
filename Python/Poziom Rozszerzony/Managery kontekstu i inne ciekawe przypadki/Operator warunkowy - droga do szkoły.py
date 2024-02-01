def estimate(s, t, v):
    time = s/v * 60
    return "Yes" if time <= t else "No" 