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
#define row 32
#define col 32
#define MAX 1000006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 7477777



LLI n, q, qur, arr[MAX];



int check_sum_sub (){
    LLI i, sum = 0;

    for (i = 1; i <= n; i++){
        sum += arr[i] * (n - i+1);
        //printf ("Sum_pl = %lld\n", sum);
        sum -= arr[i] * i;
        //printf ("Ms_sum = %lld\n", sum);
    }

    return sum;
}

void cal (LLI pos, LLI v){
    LLI res, i, j, tmp;

    res = check_sum_sub();
   // printf ("Res %lld\n", res);

    pos++;

    res -= arr[pos] * (n - pos+1);
//    printf ("pRes_1 = %lld\n", res);

    res += arr[pos] * pos;
//    printf ("pRes_2 = %lld\n", res);

    res +=  v * (n - pos+1);
//    printf ("VRes_1 = %lld\n", res);

    res -= v * pos;
//    printf ("VRes_2 = %lld\n", res);

    arr[pos] = v;
    //return res;
}

int main(){
    int tc, cs=1, i, j;
    LLI ans;
    scanf ("%d", &tc);
    while (tc--){

        scanf ("%lld %lld", &n, &q);
        for (i = 1; i <= n; i++)
            scanf ("%lld", &arr[i]);

        ans = 0;
        //check_sum_sub();

        printf ("Case %d:\n", cs++);
        for (i = 0; i < q; i++){
            scanf ("%d", &qur);

            if (qur == 1){

                //ans = func (arr, n);

                ans = check_sum_sub();
                //printf ("Case %d:\n%d\n", cs++,ans);
                printf ("%lld\n", ans);


                            }
            else{
                LLI indx, valu;
                scanf ("%lld %lld", &indx, &valu);
                cal (indx, valu);

//                arr[indx] = valu;
//                ans = func (arr, n);
//                printf ("Case %d:\n%d\n", cs++, ans);

            }
        }

        //printf ("Case %d:\n%d\n", cs++, ans);
    }
    return 0;
}


/*int func (int a[], int x){
    int i, j, sum, pl, ms;

    sum = pl = ms = 0;

    for (i = 0; i < n; i++){
        sum += a[i];
        pl++;

        for (j = i+1; j < n; j++){
            //sum += a[i] - a[j];
            sum -= a[j];
            ms++;
        }
    }

    printf ("pl = %d    ms = %d\n", pl, ms);
    return sum;
}

*/
