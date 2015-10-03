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
#define row 205
#define col 205
#define MAX 30006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 7477777
#define PI 3.1415926535897932384626433832795


bool hor[MAX], ver[MAX];
int n;

int main (){
    int h, v, i;

    scanf ("%d", &n);

    for (i = 1; i <= n * n; i++){
        scanf ("%d %d", &h, &v);

        if ( hor[h] == false && ver[v] == false ){
            printf ("%d ", i);
            hor[h] = true;
            ver[v] = true;
        }
    }


    return 0;
}



/*

struct info{
    int hor, ver;
}arr[MAX];

int main (){
    int n, i, j, ans[MAX], cnt, tmp, a, b;
    bool h[MAX], v[MAX];
    scanf ("%d", &n);

    int sije = n * n;

    for (i = 1; i <= sije; i++){
        scanf ("%d %d", &arr[i].hor, &arr[i].ver);
    }

    cnt = 0;
    a = arr[1].hor;
    b = arr[1].ver;

    h[ arr[1].hor ] = true;
    v[ arr[1].ver ] = true;

    ans[cnt++] = 1;
    //cnt = 1;
    //printf ("%d %d\n", a, b);

    for (i = 2; i <= sije; i++){
    //    if ( a != arr[i].hor && b != arr[i].ver ){
        if (  ){
           // printf ("ok %d\n", i);
            ans[cnt++] = i;

            a = arr[i].hor;
            b = arr[i].ver;
        }
    }

//    for (i = 0; i < cnt; i++)
//        printf ("%d ", ans[i]);
    return 0;
}
*/

