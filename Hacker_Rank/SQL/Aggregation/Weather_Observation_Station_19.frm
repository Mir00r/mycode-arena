Problem Link -> https://www.hackerrank.com/challenges/weather-observation-station-19

// For MySQL

select round(sqrt( power((min(LONG_W) - min(LAT_N)), 2) + power((max(LONG_W) - max(LAT_N)), 2) ), 4) from station;
