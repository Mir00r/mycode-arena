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



int main(){
    int n, q, i, j, ans, indx, marble[MAX], tmp, x, cs=1;
    bool check;
    while (scanf ("%d %d", &n, &q) == 2){
        if (n == 0 && q == 0) break;

        printf ("CASE# %d:\n", cs++);

        memo (marble, 0);
        for (i = 0; i < n; i++)
            scanf ("%d", &marble[i]);

       // sort (marble+1, marble+n+1);

        sort (marble, marble+n);

      //  for (i = 1; i <= n; i++) printf ("%d ", marble[i]);

       // ans = indx  = 0;
        check = false;

//         printf ("CASE# %d:\n", cs++);
        while (q--){
            scanf ("%d", &x);
            ans = indx = 0;

            for (i = 0; i < n; i++){
                if (marble[i] == x){
                    //ans = x;
                    indx = i+1;
                   // check = true;
                    break;
                }
            }

            if (indx != 0)
                printf ("%d found at %d\n", x, indx);
            else
                printf ("%d not found\n", x);

        }
    }
    return 0;
}
