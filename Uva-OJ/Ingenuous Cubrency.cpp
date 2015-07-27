#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define MAX 10005


LLI coin[MAX], way[MAX];

void cal (){
    int i;
    for (i = 1; i <= 21; i++){
            //printf ("%d\n", i*i*i);
            coin[i] = i*i*i;
        }
}

void cubrancy (){
    int c = 0, i, j;
    //cal ();
    //memset (way, 0, sizeof (way));
    way[0] = 1;
    for (i = 1; i <= 21; i++){
        c = coin[i];
        for (j = c; j <= MAX; j++)
            //if (j >= c)
                way[j] += way[j - c];
    }
}

int main (){
    cal ();
    cubrancy();
    int i, j, n, ans;
    while (scanf ("%d", &n) == 1){
       // memset (coin , 0, sizeof (coin));
//        memset (way, 0, sizeof (way));
        //printf ("%d %d\n", way[n], coin[n]);

        printf ("%lld\n", way[n]);
    }
    return 0;
}
