# Write your MySQL query statement below

Select product_name, year, price
from Sales
inner join
Product
using(product_id);