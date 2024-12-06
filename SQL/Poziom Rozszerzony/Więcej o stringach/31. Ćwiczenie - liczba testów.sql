/* najpierw podac to: */
SELECT UPPER(SUBSTRING(SN, 1, LENGTH(SN)-1)) AS SN, COUNT(*) AS tests FROM tests GROUP BY UPPER(SUBSTRING(SN, 1, LENGTH(SN)-1)) ORDER BY tests DESC;
/* pozniej to i powinno działać: */
SELECT UPPER(SN) AS SN, COUNT(*) AS tests FROM tests GROUP BY UPPER(SN) ORDER BY tests DESC;
