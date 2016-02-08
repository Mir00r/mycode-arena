Problem Link -> https://www.hackerrank.com/challenges/asian-population

// For ORACLE SQL

select sum(City.Population) from City INNER JOIN Country on City.COUNTRYCODE = Country.Code where Country.Continent  = 'Asia';
