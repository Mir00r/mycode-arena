Problem Link -> https://www.hackerrank.com/challenges/the-pads

// Fro ORACLE SQL

select *
from (
    select d, p, s, a
    from (
        select Name, Occupation, row_number() over (
            partition by Occupation
            order by Name
        )
        from Occupations
    )
    pivot (
        max(Name)
        for Occupation in ('Doctor' as d, 'Professor' as p, 'Singer' as s, 'Actor' as a)
    )
)
order by d, p, s, a;
