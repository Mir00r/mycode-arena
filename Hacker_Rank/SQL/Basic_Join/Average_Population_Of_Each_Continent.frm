Problem Link -> https://www.hackerrank.com/challenges/african-cities

// For ORACLE SQL and MySQL

/*
select country.continent, ceil(avg(city.population)) from city inner join country 
on city.countrycode = country.code group by country.continent;
*/
select country.continent, floor(avg(city.population)) from city inner join country 
on city.countrycode = country.code group by country.continent;
