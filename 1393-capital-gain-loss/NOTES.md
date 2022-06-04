SUM(CASE
WHEN(operation='Buy') THEN -1*price
ELSE price
END
) AS capital_gain_loss