#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define row 35
#define col 35
#define MAX 100000
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define eps 1e9
#define mod 1000000007


int main (){
    int n, i, j, maxn, sum, arr[MAX], ans;

    while (scanf ("%d", &n) ==  1){
        if (n == 0)
            break;

        sum = maxn = ans = 0;

        for (i = 0; i < n; i++)
            scanf ("%d", &arr[i]);

        for (i = 0; i < n; i++){
            sum += arr[i];

         //   printf ("Sum = %d\n", sum);

            if (sum > maxn){
                maxn = sum;
               // printf ("Maxn = %d\n", maxn);
            }

            if (sum < 0)
                sum = 0;
        }

     //   printf ("Sum = %d   Maxn = %d\n", sum, maxn);

        if (maxn > 0)
            printf ("The maximum winning streak is %d.\n", maxn);
        else
            puts ("Losing streak.");
    }

    return 0;
}
