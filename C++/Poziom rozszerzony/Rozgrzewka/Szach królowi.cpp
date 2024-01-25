bool checkCheck(char chess[8][8])
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			switch (chess[i][j])
			{
			case 'K':
				if ((chess[i + 1][j] == 'k' && i < 7) || (chess[i][j + 1] == 'k' && j < 7) || (chess[i + 1][j + 1] == 'k' && i < 7 && j < 7) || (chess[i - 1][j - 1] == 'k' && i > 0 && j > 0) || (chess[i - 1][j] == 'k' && i > 0) || (chess[i][j - 1] == 'k' && j > 0) || (chess[i + 1][j - 1] == 'k' && i < 7 && j > 0) || (chess[i - 1][j + 1] == 'k' && i > 0 && j < 7)) return true;
				break;
			case 'R':
				for (int k = 0; k < 8; k++)
				{
					if (chess[i][k] == 'k') return true;
					if (chess[k][j] == 'k') return true;
					if (chess[k][j] == 'K' || chess[k][j] == 'Q' || chess[k][j] == 'R' || chess[k][j] == 'B' || chess[k][j] == 'N') break;
				}
				break;
			case 'N':
				if ((chess[i - 2][j - 1] == 'k' && (i - 2) >= 0 && j > 1) ||
					(chess[i - 2][j + 1] == 'k' && (i - 2) >= 0 && j < 7) ||
					(chess[i - 1][j + 2] == 'k' && i > 1 && (j + 2) > 7) ||
					(chess[i + 1][j + 2] == 'k' && i < 7 && (j + 2) > 7) ||
					(chess[i + 2][j + 1] == 'k' && (i + 2) < 7 && j < 7) ||
					(chess[i + 2][j - 1] == 'k' && (i + 2) < 7 && j > 1) ||
					(chess[i + 1][j - 2] == 'k' && i < 7 && (j - 2) >= 0) ||
					(chess[i - 1][j - 2] == 'k' && i > 1 && (j - 2) >= 0)) return true;
				break;
			case 'B':
            	{
                    int x1 = j;
                    int y1 = i;
                    while (x1 > 0 && y1 > 0)
                    {
                    	x1--; y1--;
                    }
                    for (; x1 < 8 && y1 < 8; x1++, y1++)
                    {
                    	if (chess[y1][x1] == 'k') return true;
                    	if (chess[y1][x1] == 'K' || chess[y1][x1] == 'Q' || chess[y1][x1] == 'R' || chess[y1][x1] == 'B' || chess[y1][x1] == 'N') break;
                    }

                    int x2 = j;
                    int y2 = i;
                    while (x2 > 0 && y2 < 7)
                    {
                    	x2--; y2++;
                    }
                    for (; x2 < 8 && y2 >= 0; x2++, y2--)
                    {
                    	if (chess[y2][x2] == 'k') return true;
                    	if (chess[y2][x2] == 'K' || chess[y2][x2] == 'Q' || chess[y2][x2] == 'R' || chess[y2][x2] == 'B' || chess[y2][x2] == 'N') break;
                    }

            	    for (int k = 0; k < 8; k++)
            	    {
            	    	if (chess[i][k] == 'k') return true;
            	    	if (chess[k][j] == 'k') return true;
            	    	if (chess[k][j] == 'K' || chess[k][j] == 'Q' || chess[k][j] == 'R' || chess[k][j] == 'B' || chess[k][j] == 'N') break;
            	    }
                } break;
			case 'Q':
			    {
                    int x1 = j;
                    int y1 = i;
                    while (x1 > 0 && y1 > 0)
                    {
                    	x1--; y1--;
                    }
                    for (; x1 < 8 && y1 < 8; x1++, y1++)
                    {
                    	if (chess[y1][x1] == 'k') return true;
                    	if (chess[y1][x1] == 'K' || chess[y1][x1] == 'Q' || chess[y1][x1] == 'R' || chess[y1][x1] == 'B' || chess[y1][x1] == 'N') break;
                    }

                    int x2 = j;
                    int y2 = i;
                    while (x2 > 0 && y2 < 7)
                    {
                    	x2--; y2++;
                    }
                    for (; x2 < 8 && y2 >= 0; x2++, y2--)
                    {
                    	if (chess[y2][x2] == 'k') return true;
                    	if (chess[y2][x2] == 'K' || chess[y2][x2] == 'Q' || chess[y2][x2] == 'R' || chess[y2][x2] == 'B' || chess[y2][x2] == 'N') break;
                    }
				    for (int k = 0; k < 8; k++)
				    {
				    	if (chess[i][k] == 'k') return true;
				    	if (chess[k][j] == 'k') return true;
				    	if (chess[k][j] == 'K' || chess[k][j] == 'Q' || chess[k][j] == 'R' || chess[k][j] == 'B' || chess[k][j] == 'N') break;
				    }
			    } break;
			}
		}
	}
	return false;
}
