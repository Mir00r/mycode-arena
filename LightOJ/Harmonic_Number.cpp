#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 100000001
#define eps 1e-11
#define memo(array, value) memset(array, value, sizeof(array))
#define gamma 0.57721566490153286060651209008240243104215933593992


/*
// http://en.wikipedia.org/wiki/Euler%E2%80%93Mascheroni_constant

const int MAX = 1000010;

double arr[MAX], ans;

void make_res(){
    int i, j;
    arr[0] = 0;
    for (i = 1; i <= MAX; i++)
        arr[i] = arr[i-1] + 1.0/i;
}

int main(){
    make_res();
    int tc, cs=1, n;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d", &n);
        ans = (log(n) + log(n+1)) / 2.0+gamma;
        if (n < MAX) printf ("Case %d: %.10lf\n", cs++, arr[n]);
        else printf ("Case %d: %.10lf\n", cs++, ans);
    }
    return 0;
}
*/



double arr[MAX], tmp_arr;
void make_ans(){
    int i, j;
    //arr[1] = 1;
    /*for (i = 2; i <= MAX; i++)
        arr[i] = arr[i-1] + 1.0/i;*/
   for (i = 1; i <= MAX; i++){
        arr[i] = arr[i-1];
        for (j = 1; j <= 100; j++)
            arr[i] += 1.0 / ((i-1)*(j+100));
    }
}
int main(){
    make_ans();
    int t, c = 0, n, div, mod;
    scanf ("%d", &t);
    while (t--){
        scanf ("%d", &n);
        div = n / 100;
        mod = n % 100;
        double tmp_arr = arr[n];
        while (mod){
            tmp_arr += 1.0 / (div*100+mod);
            mod--;
        }
        printf ("Case %d: %.10lf\n", ++c, tmp_arr);
    }
    //printf ("OK");
    return 0;
}
