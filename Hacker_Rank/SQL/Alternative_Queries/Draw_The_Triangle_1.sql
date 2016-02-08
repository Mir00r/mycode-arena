Problem Link -> https://www.hackerrank.com/challenges/draw-the-triangle-1

/ For SQL

/*
* * * * * 
* * * * 
* * * 
* * 
*


Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.

select rpad('* ', round(r), '* ') from (Select Rownum r From dual Connect By Rownum <= 20 order by r desc) A;
*/

select rpad( '* ', level*2, '* ' ) from dual connect by level <= 20 order by level desc;
