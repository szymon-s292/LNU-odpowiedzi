SELECT Color, LTRIM(Hex, '#') AS Hex, REPLACE(REPLACE(Dec, '(', ''), ')', '') AS Dec FROM colors;
