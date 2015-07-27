#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 99999

int main(){
    int m, x, y, i, j, arr[MAX], cnt, tmp, add, sum, ans;
    while (scanf ("%d", &m) == 1){
        add = sum = 0;
        for (i = 1; i <= m; i++){
            scanf ("%d", &arr[i]);
            sum += arr[i];
        }
        scanf ("%d%d", &x, &y);
        for (i = 1; i <= m; i++){
            add += arr[i];
            sum -= arr[i];
            if (add >= x && add <= y && sum >= x && sum <= y){
                printf ("%d\n", i+1);
                return 0; //break;
            }
            /*else{
                printf ("0\n");
                break;
            }*/
        }
        printf ("0\n");
    }
    return 0;
}

