-- SELECT TotalSale FROM Sales WHERE TotalSale GROUP BY TotalSale having max(TotalSale)
-- SELECT max(TotalSale) FROM Sales
SELECT TotalSale FROM Sales WHERE TotalSale =max(TotalSale)  