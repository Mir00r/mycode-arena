#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <queue>
#include <stack>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define ULL unsigned long long int
#define MAX 100005
#define row 70
#define col 70
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define eps 0.000000001

LLI arr[MAX], brr[MAX], crr[MAX], n;

map <LLI, LLI> mp, np, op;

int main(){
    LLI i, j, k, x, y, ans, tmp, cnt, a, b, c;

    scanf ("%I64d", &n);
    LLI sum, sum1, sum2;

    sum = sum1 = sum2 = 0;

    for (i = 0; i < n; i++){
        scanf ("%I64d", &arr[i]);
        //arr[a]++;

        sum += arr[i];
    }
    for (i = 0 ; i < n-1; i++){
        scanf ("%I64d", &brr[i]);
       // brr[b]+2;
        sum1 += brr[i];
    }
    for (i = 0 ; i < n-2; i++){
        scanf ("%I64d", &crr[i]);
      //  crr[c]+3;
        sum2 += crr[i];
    }

    x = sum - sum1;
    y = sum1 - sum2;

    printf ("%I64d\n%I64d\n", x, y);

    return 0;
}



/*

    np.clear();

    for (i = 0; i < n; i++){
        scanf ("%I64d", &arr[i]);
       // mp[arr[i]]++;
    }
    for (i = 0 ; i < n-1; i++){
        scanf ("%I64d", &brr[i]);
        np[brr[i]]++;
    }

    for (i = 0; i < n+1; i++){
        if (np[arr[i]] == 0){
            x = arr[i];
            break;
        }
        else
            np[arr[i]]--;
    }
    np.clear();

    for (i = 0 ; i < n-2; i++){
        scanf ("%I64d", &arr[i]);
        np[arr[i]]++;
    }


    for (i = 0; i < n+1; i++){
        if (np[brr[i]] == 0){
            y = brr[i];
            break;
        }
        else
            np[brr[i]]--;
    }
//    mp.clear ();
    np.clear ();
//    op.clear ();




    printf ("%I64d\n%I64d\n", x, y);


*/





/*

//    sort (arr, arr+n);
//    sort (brr, brr+n-1);
//    sort (crr, crr+n-2);


    for (i = 0; i < n; i++) printf ("%I64d ", arr[i]);
    NL;
    for (i = 0 ; i < n-1; i++) printf ("%I64d ", brr[i]);
    NL;
    for (i = 0 ; i < n-2; i++) printf ("%I64d ", crr[i]);
    NL;

        x = arr[n-2];
    y = brr[n-3];
*/
