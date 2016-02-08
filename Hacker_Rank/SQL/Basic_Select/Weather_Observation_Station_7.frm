Problem Link -> https://www.hackerrank.com/challenges/weather-observation-station-7

// For MySQL
select distinct city from station where city RLIKE '[aeiou]$'; 

select distinct city from station where city REGEXP '[aeiou]$'; 
