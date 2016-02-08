Problem Link -> https://www.hackerrank.com/challenges/placements

// For ORACLE SQL

select Students.name 
    from students inner join friends 
        on students.id = friends.id inner join packages 
            on friends.friend_id = packages.id 
where packages.salary > (select salary from packages where id = Students.id )
    order by packages.salary;
