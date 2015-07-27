#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define L long int
#define LL long long int
#define ULL unsigned long long
#define MAX 99999

int kaj_koro_grandy_plz(int x){
    while (x % 2 != 0){
        x = (x-1) / 2;
        //printf ("Ki_ase_dekhi_to = %d\n", x);
    }
    return x /= 2;
}

int main(){
    int tc, cs=1, n, value, i, j, Xor, sum, ans, tmp, cnt;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d", &n);
        Xor = 0; sum = 0;
        for (i = 1; i <= n; i++){
            scanf ("%d", &value);
            //sum += value;
            //tmp = kaj_koro_grandy_plz(value);
            //printf ("Ki_diso = %d\n", tmp);
            Xor ^= kaj_koro_grandy_plz(value);
            //printf ("XOR = %d\n", Xor);
        }
        printf ("Case %d: ", cs++);
        if (Xor) puts ("Alice");
        else puts ("Bob");
    }
    return 0;
}
