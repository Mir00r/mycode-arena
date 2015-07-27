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
    int K, N, M, X, Y, i, j, tmp, flag;
    while (scanf ("%d", &K) == 1 && K){
        scanf ("%d%d", &N, &M);
        while (K--){
            scanf ("%d%d", &X, &Y);
            if (X == N || Y == M) printf ("divisa\n");
            else if (X > N){
                if (Y > M) printf ("NE\n");
                else printf ("SE\n");
            }
            else{
               if (Y > M) printf ("NO\n");
               else printf ("SO\n");
            }
        }
    }
    return 0;
}
