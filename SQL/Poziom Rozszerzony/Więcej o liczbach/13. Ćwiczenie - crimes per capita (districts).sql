SELECT district, ROUND( CAST((SUM(y_12)+SUM(y_13)+SUM(Y_14)+SUM(Y_15)+SUM(Y_16)) AS FLOAT) / CAST(SUM(population) AS FLOAT), 2) AS [crimes per capita] FROM crimes GROUP BY district ORDER BY district, [crimes per capita] DESC;

/* to jest zle */
