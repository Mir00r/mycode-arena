Problem Link -> https://www.hackerrank.com/challenges/weather-observation-station-10

// For MySQL
SELECT DISTINCT CITY FROM STATION WHERE LOWER(CITY) REGEXP '[^aeiou]$' ORDER BY CITY ASC;

select distinct city from station where city not regexp '[aeiou]$';
