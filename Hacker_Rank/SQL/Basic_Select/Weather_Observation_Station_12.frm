Problem Link -> https://www.hackerrank.com/challenges/weather-observation-station-12

// For MySQL
select distinct city from station where city not regexp '^[aeiou]' and city not regexp '[aeiou]$';
