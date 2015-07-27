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
#define MAX 30006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
//#define mod 7477777

LLI n, m, arr[MAX];



bool check (){
    int cnt = 0, i;


        for (i = 1; i <= m; i++){

            if (n == arr[i] || arr[0] == 1)
                return true;

            if (abs (arr[i] - arr[i-1]) == 1){
                cnt++;
                if (cnt == 2){
                    //puts ("ok");
                    return true;
                    break;
                }
            }
            else
                cnt = 0;
        }
    return false;
}


int main (){
    int tc, i, j;
    bool flag;

    scanf ("%d", &tc);
    while (tc--){

        scanf ("%lld %lld", &n, &m);

        for (i = 1; i <= m; i++)
            scanf ("%lld", &arr[i]);

        sort (arr+1, arr+m+1);

        if (!check ())
            puts ("YES");
        else
            puts ("NO");

    }

    return 0;
}



/*
int main (){
    int tc, i, j, cnt;
    bool flag;

    scanf ("%d", &tc);
    while (tc--){

        cnt = 0;
        flag = false;

        scanf ("%lld %lld", &n, &m);

        for (i = 0; i < m; i++)
            scanf ("%lld", &arr[i]);

        sort (arr, arr + m);

        for (i = 0; i < m-1; i++){
            if (arr[i+1] - arr[i] == 1)
                cnt++;
            else
                cnt = 0;

            if (cnt >= 2)
                flag = true;
        }

        if (arr[m-1] == n || arr[0] == 1)
            flag = true;


        if (flag)
            puts ("NO");
        else
            puts ("YES");

    }

    return 0;
}
*/




