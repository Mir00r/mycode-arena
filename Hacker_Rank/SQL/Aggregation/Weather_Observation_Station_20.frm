Problem Link -> https://www.hackerrank.com/challenges/weather-observation-station-20

// For MySQL

select round( x.LAT_N, 4 ) from STATION x, 
  STATION y group by x.LAT_N having sum( sign( 1 - sign( y.LAT_N -x.LAT_N ) ) ) / count(*) > .5 LIMIT 1;
