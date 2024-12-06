SELECT ID, SN, MAX(M1, M2,M3) AS [MAX], ROUND((M1+M2+M3) / 3, 2) AS MAX_AVG FROM tests where ID IN (SELECT ID FROM tests WHERE SN IN (select SN from tests group by SN having count(SN) > 4) AND T > 59 AND min(M1, M2, M3) > 0.9 * max(M1, M2, M3)) GROUP BY SN HAVING MIN((M1+M2+M3) / 3.0) > 0.85 * MAX((M1+M2+M3) / 3.0) ORDER BY MAX_AVG DESC

/* to jest zle */
