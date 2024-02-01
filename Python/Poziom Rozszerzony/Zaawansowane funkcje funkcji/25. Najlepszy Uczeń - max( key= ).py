def bestStudent( studentScores ):
    return max(studentScores, key=lambda studentScores: studentScores[1])[0]