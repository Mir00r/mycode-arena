Problem Link -> https://www.hackerrank.com/challenges/the-pads

// Fro MySQL

/*
select concat(name, '(', substr(occupation, 1, 1), ')') from occupations order by name asc;
select concat('There are total ', count(), ' ', lower(occupation), 's', '.') as 
report from occupations group by occupation order by count();

*/

select concat(name,'(', substr(occupation, 1, 1), ')') from occupations order by name; 
select concat('There are total ',count(occupation),' ',lower(occupation),'s.') 
as total from occupations group by occupation order by count(occupation), lower(occupation);
