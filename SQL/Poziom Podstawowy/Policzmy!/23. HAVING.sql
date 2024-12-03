SELECT location, SUM(fine) AS total FROM tickets WHERE date >= '1992' GROUP BY location HAVING COUNT(*) > 2;
