#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define L unsigned int
#define LL unsigned long long int
#define MAX 30000


/*int main (){
    int coin[7], tk[7492]={0}, paisa, i, j, k, temp;
    coin[1] = 1, coin[2] = 5, coin[3]=10, coin[4]=25, coin[5]=50;
    tk[0] = 1;
    for (i = 1; i <= 5; i++){
        for (j = coin[i]; j <= 7492; j++){
            temp = j - coin[i];
           // printf("%d  %d\n",temp,tk[j]);
            tk[j] = tk[j] + tk[temp];
        }
    }
  /*  for(i=1;i<=20;i++)
        printf("%d ",tk[i]);*/
/*    while (scanf ("%d", &paisa) == 1)
        printf ("%d\n", tk[paisa]);
    return 0;
}
*/

int coin[MAX], way[MAX];

void cal (){
    int i;
    for (i = 1; i <= 21; i++){
            //printf ("%d\n", i*i*i);
            coin[i] = i*i*i;
        }
}

void cubrancy (){
    int c=0, i, j;

    for (i = 1; i <= 21; i++){
        c = coin[i];
        for (j = c; j <= 9261; j++)
            way[j] += way[j - c];
    }
}

int main (){
    cal ();
    cubrancy();
    int i, j, n, ans;
    while (scanf ("%d", &n) == 1){
        memset (coin , 0, sizeof (coin));
        memset (way, 0, sizeof (way));

        printf ("%d\n", way[n]);
    }
    return 0;
}
