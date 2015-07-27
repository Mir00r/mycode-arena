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
    int k, d, i, j, cnt, tmp, res;
    while (scanf ("%d%d", &k, &d) == 2){
        if (k > 1 && d == 0) printf ("No Solution\n");
        else{
            printf ("%d", d);
            for (i = 1; i < k; i++)
                printf ("0");
            printf ("\n");
        }
    }
    return 0;
}
