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
#define row 1005
#define col 1005
#define MAX 100006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 7477777
#define PI 3.1415926535897932384626433832795

int arr[MAX], brr[MAX], dp[row][col];

/*
int LCS (int m, int n){
    if (m == -1 || n == -1)
        return 0;
    int &result = dp[m][n];

    if (result != -1)
        return result;
    if (arr[m] < arr[n])
        return LCS (m+1, n-1) + 1;
    else
        result = max (LCS (m-1, n), LCS (m, n-1));

    dp[m][n] = result;
    return result;
}

*/


//set<int>st;

int main(){
    int tmp, ans=1, i, j, n;

    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d", &arr[i]);
        //st.insert(arr[i]);
    }


    //memset (dp, -1, sizeof (dp));
   // ans = LCS (1, n);
   // printf ("%d\n", ans);

    tmp = 1;


    for (i = 1; i < n; i++){
        if (arr[i - 1] <= arr[i])
            ans++;
        else
            ans = 1;

        tmp = max (ans, tmp);
    }

    printf ("%d\n", tmp);

   // printf ("%d\n", st.size ());

    return 0;
}
