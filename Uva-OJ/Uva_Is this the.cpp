#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <algorithm>
#include <iostream>

using namespace std;

#define LLI __int64
#define ULL unsigned long long
#define MAX 100005
#define row 1001
#define col 1001
#define pb push_back




int main(){
    long long int tc, a, b, c, k, cs=1;
    int arr[MAX];
    scanf("%lld", &tc);
    while(tc--){
        scanf("%lld %lld %lld", &a, &b, &c);


        if(a > b)
            if(a > c)
                swap (a, c);
        else
            if(b > c)
                swap (b, c);

        if(c >= (a + b))
            printf("Case %d: Invalid\n", cs++);
        else if(c == a && c == b && a == b)
            printf("Case %d: Equilateral\n", cs++);
        else if(a != b && b != c && c != a)
            printf("Case %d: Scalene\n", cs++);
        else if(a == b || b == c || c == a)
        printf("Case %d: Isosceles\n", cs++);
    }
    return 0;
}







/*
int main (){
    int t, i, x, y, z;
    scanf ("%d", &t);
    for (i = 0; i < t; i++){
        scanf ("%d%d%d", &x, &y, &z);
        if (x + y <= z || y + z <= x || z + x <= y)
            printf ("Case %d: Invalid\n", i+1);

        else{
            if (x == y && y == z && z == x)
                printf ("Case %d: Equilateral\n", i+1);
            else if (x != y && y != z && z != x)
                printf ("Case %d: Scalene\n", i+1);
            else if (x == y != z && y == z != x && z == x != y)
                printf ("Case %d: Isosceles\n", i+1);
        }
    }
    return 0;
}*/
