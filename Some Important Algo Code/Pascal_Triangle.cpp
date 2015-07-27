
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define pb push_back
#define eps 1e-7
#define row 100
#define col 100
#define MAX 10000


int bino_coeff (int n, int k){
    int res = 1, i;

    if (k > n - k)      // C (n, k) = C (n, n - k)
        k = n - k;
    for (i = 0; i < k; i++){
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

// Method 1 O(n3) solution

/*void pascal (int n){
    int i, j, sum=0;

    for (i = 0; i < n; i++){
        for (j = 0; j <= i; j++){
            printf ("%d ", bino_coeff(i, j));
            //sum += bino_coeff(i, j);
            //printf ("%d\n", sum);
        }
        puts ("");
    }
    //printf ("%d\n", sum);
}*/

// Method 2 ( O(n^2) time and O(n^2) extra space )

/*void pascal (int n){
    int i, j, sum=0;
    int dp[n][n];

    for (i = 0; i < n; i++){
        for (j = 0; j <= i; j++){
            if (i == j || j == 0)
                dp[i][j] = 1;       // First and last values in every row are 1
            else{
                dp[i][j] = dp[i-1][j-1] + dp[i-1][j];   // Other values are sum of values just above and left of above
                //sum += dp[i][j];
            }
            printf ("%d ", dp[i][j]);
        }
        puts ("");
    }
   // printf ("%d\n", sum);
}
*/

/*
    Method 3 ( O(n^2) time and O(1) extra space )
    This method is based on method 1. We know that ith entry in a line number line is Binomial Coefficient C(line, i)
    and all lines start with value 1. The idea is to calculate C(line, i) using C(line, i-1). It can be calculated in O(1)
    time using the following.

    C(line, i)   = line! / ( (line-i)! * i! )
    C(line, i-1) = line! / ( (line - i + 1)! * (i-1)! )
    We can derive following expression from above two expressions.
    C(line, i) = C(line, i-1) * (line - i + 1) / i

    So C(line, i) can be calculated from C(line, i-1) in O(1) time

*/

void pascal (int n){
    int i, j, C, sum = 0;

    for (i = 1; i <= n; i++){
        C = 1;      // used to represent C(i, j)
        for (j = 1; j <= i; j++){
            printf ("%d ", C);  // The first value in a line is always 1
            C = C * (i - j) / j;
        }
        puts ("");
    }
}


int main(){
    int i, j, ans, cs=1;
    int n, k;

    while (scanf ("%d", &n) == 1){
        //ans = bino_coeff(n, k);
        //printf ("Case %d: %d\n", cs++, ans);
        pascal(n);
    }
    return 0;
}
