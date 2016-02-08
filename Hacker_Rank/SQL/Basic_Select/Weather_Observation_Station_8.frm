Problem Link -> https://www.hackerrank.com/challenges/weather-observation-station-8

// For MySQL
SELECT DISTINCT CITY FROM STATION WHERE CITY REGEXP '^[aeiou](.*[aeiou])?$'

select distinct city from station where city REGEXP "^[aeiou]" and city REGEXP "[aeiou]$";
