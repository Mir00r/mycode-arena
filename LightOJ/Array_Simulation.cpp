#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 999

int main(){
    int tc, cs=1, d, e, i, j, k, n, m, q, r, x, y, z, arr[MAX], brr[MAX];
    char c[4];
    scanf ("%d", &tc);
    getchar();
    while (tc--){
        //getchar();
        scanf ("%d%d", &n, &m);
        //getchar();
        for(i = 0; i < n; i++) scanf("%d", &arr[i]);
        getchar();
        for(i = 0; i < m; i++){
            gets(c);
            if(c[0] == 'P'){
                scanf("%d %d", &y, &z);
                x = arr[y];
                arr[y] = arr[z];
                arr[z] = x;
            }
            else if(c[0] == 'S'){
                scanf("%d", &d);
                r = 0;
                while(arr[r]){
                    arr[r] += d;
                    r++;
                }
            }
            else if(c[0] == 'D'){
                scanf("%d", &k);
                k = 0;
                while(arr[k]){
                    arr[k] = arr[k] / k;
                    k++;
                }
            }
            else if(c[0] == 'M'){
                scanf("%d", &d);
                r = 0;
                while(arr[r]){
                    arr[r] = arr[r] * d;
                    r++;
                }
            }
            else if(c[0] == 'R'){
                q = 0;
                for(j = n - 1; j >= 0; j--){
                    brr[q] = arr[j];
                    q++;
                }
                for(j = 0; j < n; j++) arr[j] = brr[j];
            }
        }
        printf("Case %d:\n", cs++);
        for(i = 0; i < n; i++){
            printf("%d ", arr[i]);
            printf ("\n");
        }
    }
    return 0;
}
