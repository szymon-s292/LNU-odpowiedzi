SELECT [#], A, B, ABS(A-B) AS [diff] FROM pressure ORDER BY [diff] DESC LIMIT 10;