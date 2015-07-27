#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 50000+10

int main(){
    int tc, i, j, cnt, tmp, street[MAX], aven[MAX], S, A, F, met_point;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d%d%d", &S, &A, &F);
        for (i = 0; i < F; i++){
            scanf ("%d", &street[i]);
            scanf ("%d", &aven[i]);
        }
        sort (street, street+F);
        sort (aven, aven+F);
        if (F % 2){
            met_point = F/2;
            printf ("(Street: %d, Avenue: %d)\n", street[met_point], aven[met_point]);
        }
        else{
            met_point = (F-1)/2;
            printf ("(Street: %d, Avenue: %d)\n", street[met_point], aven[met_point]);
        }
    }
    return 0;
}
