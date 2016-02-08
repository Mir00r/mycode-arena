Problem Link -> https://www.hackerrank.com/challenges/symmetric-pairs

// For MySQL

/*
way 1
select case when x <= y then x else y end as n1, 
    case when x <= y then y else x end as n2 
        from Functions group by n1, 
            n2 having count(*) = 2;

way 2
select x, y from functions f1 
    where exists(select * from functions f2 where f2.y = f1.x 
    and f2.x = f1.y and f2.x > f1.x) and (x != y) 
union 
select x, y from functions f1 where x = y and 
    ((select count(*) from functions where x = f1.x and y = f1.x) > 1)    
        order by x;

*/


select t.X as X, t.Y as Y 
    from Functions as t inner join Functions as m on t.Y = m.X 
        where t.X = m.Y and t.X < t.Y union select * 
    from (select X, Y from Functions where X = Y) as s 
        group by s.X having count(*) > 1 order by X ;
