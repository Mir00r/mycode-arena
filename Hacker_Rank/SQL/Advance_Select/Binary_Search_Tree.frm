Problem Link -> https://www.hackerrank.com/challenges/binary-search-tree-1

// Fro MySQL

select N, if(P is NULL,'Root', if((select count(*) from BST where P = B.N ) > 0,'Inner','Leaf')) from BST as B order by N;
