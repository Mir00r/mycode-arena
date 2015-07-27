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

#define LLI long long int
#define ULL unsigned long long int
#define MAX 500005
#define pb push_back
#define NL puts ("")


int main(){

    #ifdef Mir00r

        freopen("input.txt","r",stdin);
//        freopen("output.txt","w",stdout);
//
    #endif


    int tc, i, j, abi, shiv, a, b, cnt, ans,tmp;
    int arr[MAX], n;
    scanf("%d", &tc);
    while (tc--){
        scanf ("%d", &n);
        for (i = 1; i <= n; i++) scanf ("%d", &arr[i]);

        a = b = abi = shiv = 0;
        i =  1;
        a = arr[1];
        b = arr[n];
        tmp = n;
        int x =1, y = 1;
        while (i <= n){
            //puts ("ok");
            if (a < b){
                abi++;
                x += 1;
                a = arr[x];
            }
            else {
                shiv++;
                tmp -= y;
                b = arr[tmp];
            }
            //printf ("%d %d\n", a, b);
            i++;
        }
//        if (shiv == 0)
//            printf ("%d %d\n", abi, shiv+1);
//        else if (abi == 0)
//            printf ("%d %d\n", abi+1, shiv);
//        else
            printf ("%d %d\n", abi, shiv);
    }
    return 0;
}
