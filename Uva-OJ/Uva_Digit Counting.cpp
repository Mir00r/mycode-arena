#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX  1000

char str[MAX];

int main(){
    int t, i, n, j, k, mod, tmp, cnt, arr[11];
    scanf ("%d", &t);
    while (t--){
        cnt = 0;
        memset (arr, 0, sizeof (arr));
        scanf("%d", &n);
        for (j = 1; j <= n; j++){
            tmp = j;
            while(tmp > 0){
                //str[cnt] = (tmp % 10) + 48;
                arr[tmp % 10]++;
                tmp /= 10;
                //cnt++;
            }
        }
        for (i = 0; i < 9; i++) printf ("%d ", arr[i]);
        printf ("%d\n", arr[9]);
        /*for (i = 0; i < cnt; i++) arr[str[i] - 48]++;
        for (i = 0; i < 10; i++){
            printf ("%d", arr[i]);
            if (i != 9) printf (" ");
            else printf ("\n");
        }*/
    }
    return 0;
}



