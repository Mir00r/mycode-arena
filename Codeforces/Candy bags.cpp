#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 9099

void candy_bag(int j, int n){
    if (j <= n){
        printf ("%d %d\n", j, n);
        candy_bag(j+1, n-1);
    }
}

int main(){
    int n, i, j, tmp, cnt, ans;
    while (scanf ("%d", &n) == 1){
        //for (i = 1; i < n*n; i++)
            cnt = 1;
            tmp = n*n;
            /*while (cnt < tmp){
                printf ("%d %d\n", cnt, tmp);
                cnt++; tmp--;
            }*/
            candy_bag(1, tmp);
        printf ("\n");
    }
    return 0;
}
