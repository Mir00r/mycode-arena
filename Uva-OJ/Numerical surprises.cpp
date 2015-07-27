#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 4000

int main(){
    int tc, n, i, j, tmp, cnt;
    char p[MAX];
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d", &n);
        scanf ("%s", p);
        tmp = 0;
        for (i = 0; i <= p[i]; i++){
            tmp = tmp*10 + p[i] - '0';
            //printf ("Ki aita = %d\n", tmp);
            tmp %= n;
        }
        printf ("%d\n", tmp);
    }
    return 0;
}
