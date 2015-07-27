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
#define row 55
#define col 55
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



int main (){
    int n, rect=0, i, j, x1, y1, x2, y2, ans;

    scanf ("%d", &n);

    for (i = 0; i < n; i++){
        scanf ("%d %d %d %d", &x1, &y1, &x2, &y2);

//        if ( (abs (x1 - y2) == 1 ) && (abs (y1 - x2) == 1 ) ){
//            int a = min (x1, y2);
//            int b = min (y1, x2);
//
//            rect += (a * b);
//        }
//        else{
//            int a = (x1 * y2);
//            int b = (y1 * x2);
//
//            rect += (a * b);
//
//        }

        rect += ( (y2 - x1 + 1) * ( x2 - y1 + 1 ) );

    }
    printf ("%d\n", rect);

    return 0;
}



