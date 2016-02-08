Problem Link -> https://www.hackerrank.com/challenges/the-blunder

// For MySQL

select ceil( avg(salary) - avg(replace(salary, 0, '')) ) from employees;
