#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define L long int
#define LL long long int
#define ULL unsigned long long
#define  MAX 30

int main(){
    int tc, cs=1, i, j, n, k, cnt, tmp;
    char str[MAX];
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d%d", &n, &k);
        cnt = 0;
        for (i = 0; i < 26; i++) str[i] = 'A' + i;
        printf ("Case %d:\n", cs++);
        do{
            for (j = 0; j < n; j++) printf ("%c", str[j]);
            printf ("\n");
            cnt++;
        }while (next_permutation (str, str+n) && cnt < k);
    }
    return 0;
}
