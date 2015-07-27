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
#define MAX 1000006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 7477777

int n1, n2;

int arr[MAX], brr[MAX], crr[MAX], dp[row][col];

void inp1();
void inp2();
void inp3();
//bool inp3 ();

bool cal (int x, int y);


void inp1 (){
     int i;
    for (i = 1; i <= n1; i++)
        scanf ("%d", &arr[i]);
}


void inp2 (){
     int i;
    for (i = 1; i <= n2; i++)
        scanf ("%d", &brr[i]);
}


void inp3 (){
    int i;
    for (i = 1; i <= n1+n2; i++)
        scanf ("%d", &crr[i]);
}


bool cal (int x, int y){
    if (dp[x][y] > 0)
        return true;
    if (dp[x][y] < 0)
        return false;

   // cal (x-1, y);
   // cal (x, y-1);

    if (arr[x] == crr[x + y] && cal (x-1, y) ){
       // cal (x - 1, y);
        dp[x][y] = true;
       // cal (x - 1, y);
        return true;
    }

    if (brr[y] == crr[x + y]  && cal (x, y-1) ){
        //cal (x, y-1);
        dp[x][y] = true;
       // cal (x, y-1);
        return true;
    }

    dp[x][y] =-1;

    return false;
}


int main(){
    int i, j, ans, tmp, cnt;

    while (scanf ("%d %d", &n1, &n2) == 2){
        if (n1 + n2 == 0) break;

        inp1 ();
        inp2 ();
        inp3 ();

        memo (dp, 0);
        dp[0][0] = true;

        if (cal (n1, n2))
            puts ("possible");
        else
            puts ("not possible");

    }

    return 0;
}
