Problem Link -> https://www.hackerrank.com/challenges/what-type-of-triangle

// Fro MySQL

select case when (A + B <= C) or (B+C <= A) or (A+C <= B) then "Not A Triangle" 
            when (A = B) and (B = C) then "Equilateral" 
            when (A = B) or (C = A) or (B = C) 
            then "Isosceles" else "Scalene" 
            end from TRIANGLES
