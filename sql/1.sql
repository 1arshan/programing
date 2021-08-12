-- SELECT TotalSale FROM Sales WHERE TotalSale GROUP BY TotalSale having max(TotalSale)
-- SELECT max(TotalSale) FROM Sales
-- SELECT TotalSale FROM Sales WHERE TotalSale =max(TotalSale)  
-- SELECT TotalSale FROM Sales WHERE TotalSale in (select max(TotalSale) from Sales)

SELECT totalsale as totalsale FROM Sales WHERE TotalSale 

select city from station WHERE city in (select min(ci))

from name from employee where salary >2000 and months<10
order by employee_id;