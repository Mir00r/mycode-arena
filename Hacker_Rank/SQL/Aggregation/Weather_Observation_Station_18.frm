Problem Link -> https://www.hackerrank.com/challenges/weather-observation-station-18

// For MySQL

select round( (min(LONG_W) + max(LONG_W) ), 4 ) - round( (min(LAT_N) + max(LAT_N) ), 4 ) from station;
