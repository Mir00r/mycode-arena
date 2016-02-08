Problem Link -> https://www.hackerrank.com/challenges/weather-observation-station-11

// For MySQL
SELECT DISTINCT CITY FROM STATION WHERE LOWER(CITY) REGEXP '^[^aeiou]' OR LOWER(CITY) REGEXP '[^aeiou]$' ORDER BY CITY ASC;

select distinct city from station where city not REGEXP '^[aeiou]' or city not REGEXP '[aeiou]$';
