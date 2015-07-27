#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <queue>
#include <stack>
#include <vector>
#include <list>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define ULL unsigned long long int
#define MAX 100002
#define row 30
#define col 30
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define eps 0.000000001

int n, arr[MAX];
vector <int> vt;

int main (){
    int i, j, cnt, tmp, ans, len, l, r;
    scanf ("%d", &n);
    for (i = 1; i <= n; i++) scanf ("%d", &arr[i]);

    cnt = tmp = l = r = 0;

    for (i = 1; i <= n; i++){
        if (arr[i] != i){
            vt.pb(i);
        }
    }

    len = vt.size ();

  //  l = vt[0];
 //   r = vt[len-1];

//    for (i = a; i <= b; i++){
//       // puts ("ok");
//        arr[i] = i;
//        cnt++;
//    }
//    for (i = 1; i <= n; i++)
//        printf ("%d ", arr[i]);
//    NL;



    //printf ("%d\n", len);
//    for (i = 0; i < len; i++)
//        printf ("%d ", vt[i]);
   // NL;

    if (len == 0 || len == n){
        l = 0;
        r = 0;
    }
    else{
        l = vt[0];
        r = vt[len-1];
    }
    printf ("%d %d\n", l, r);

    return 0;
}
