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
#define LLI long long
#define LL __int64
#define ULL unsigned long long
#define row 501
#define col 501
#define MAX 100000+6
#define jora pair <LLI, LLI>
#define ff first
#define ss second
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 7477777


int main(){
    int n, f, gp[MAX], i, j, sum=0, ans, tmp, one = 0, two = 0, three = 0, four = 0;

    memo (gp, 0);

    scanf ("%d", &n);
    for (i = 0; i < n; i++){
       // scanf ("%d", &gp[i]);
       // sum += gp[i];
//        scanf ("%d", &f);
//        gp[f]++;

        scanf ("%d", &f);
        if (f == 1)
            one++;
        if (f == 2)
            two++;
        if (f == 3)
            three++;
        if (f == 4)
            four++;

    }

    ans = four + three + two / 2;

//    printf ("Check = %d\n", ans);

    one -= three;

    if (two % 2 == 1){
        one -= 2;
        ans++;
    }

    if (one > 0 && one % 4 == 0)
        ans += (one / 4);

    if (one > 0 && one % 4 != 0)
        ans += ( (one / 4) + 1 ) ;

    printf ("%d\n", ans);

//    if (sum % 4 == 0)
//        ans = sum / 4;
//    else
//        ans = (sum / 4) + 1;
//
//    printf ("%d\n", ans);

//    gp[1] = max ( gp[1] - gp[3], 0 );
//    printf ("Tmp = %d\n", gp[1]);
//
//    sum = gp[4] + gp[3] + (gp[2] + 2 * gp[1] + 3 );
//    printf ("Sum = %d\n", sum);
//
//    ans = sum / 4;
//
//    printf ("%d\n", ans);



    return 0;
}
