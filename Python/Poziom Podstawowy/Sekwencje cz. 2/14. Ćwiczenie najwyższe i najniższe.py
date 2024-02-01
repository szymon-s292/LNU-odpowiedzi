def highLow( t1, t2 ):
      tt = t1 + t2
      tt.sort(reverse = True)
      return tt[0 : 3] + tt [-3 : ] 