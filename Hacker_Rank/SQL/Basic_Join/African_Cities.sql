Problem Link -> https://www.hackerrank.com/challenges/african-cities

// For ORACLE SQL

select City.name from City INNER JOIN Country on City.COUNTRYCODE = Country.Code where Country.Continent  = 'Africa';
