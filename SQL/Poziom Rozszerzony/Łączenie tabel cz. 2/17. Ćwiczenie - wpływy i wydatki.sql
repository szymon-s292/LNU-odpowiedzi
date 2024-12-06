SELECT 'income' AS field, SUM(amount) AS sum FROM account WHERE amount > 0 UNION ALL SELECT 'outgoings', SUM(amount) FROM account WHERE amount < 0;
