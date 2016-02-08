Problem Link -> https://www.hackerrank.com/challenges/weather-observation-station-15

// For MySQL

select round(LONG_W, 4) from station where LAT_N = (select max(LAT_N) from station where LAT_N < 137.2325 );
