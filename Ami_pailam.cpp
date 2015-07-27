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
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define eps 0.000000001


int l, arr[MAX], bom[MAX], res[MAX];

/*void save (){
    int i;
    for (i = 1; i <= MAX; i++)
        bom[i] = i;
}*/

int main(){
    //save ();
    int i, j, ind, tmp,  num, cnt, x, y;
    while (scanf ("%d", &l) == 1){
        for (i = 1; i <= l; i++)
            scanf ("%d", &arr[i]);

        cnt = 0;
        sort (arr+1, arr+l+1);

//        for (i = 1; i <= l; i++) printf ("%d ", arr[i]);
//        NL;

        for (i = 1; i <= l; i++){
            res[i] = arr[i] - cnt;
            cnt++;
        }

        for (i = 1; i <= l; i++)
            printf ("%d ", res[i]);
        NL;
    }
    return 0;
}



/*
        while (1){
            if (arr[x] == bom[y]){
                bom[y] = bom[y+1];
                //arr[x] = arr[x+1];
                res[cnt++] = y;
                x++;
                y--;
                l--;
            }
            y++;
            if (l == 0) break;
        }

*/
