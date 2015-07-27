#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <set>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define LLU long long unsigned
#define row 1010
#define col 1010
#define MAX 1006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 7477777

int main (){
    int n, len, i, j, ans, sum, diff1, diff2, a, b;
    char dig1[MAX], dig2[MAX];

    scanf ("%d", &n);
    scanf ("%s", dig1);
    scanf ("%s", dig2);

    ans = sum = diff1 = diff2 = 0;

    for (i = 0; i < n; i++){
        //a = atoi (dig1[i]);
       // b = atoi (dig2[i]);

        a = dig1[i] - '0';
        b = dig2[i] - '0';
        //printf ("%d %d\n", a, b);

        diff1 = abs (a - b);
        diff2 = abs (10 - diff1);

  //      printf ("%d     %d\n", diff1, diff2);

        ans += min (diff1, diff2);
    }

    printf ("%d\n", ans);

    return 0;
}
