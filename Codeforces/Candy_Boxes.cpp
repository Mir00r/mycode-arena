#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define MAX 10005
#define LLI __int64
#define maxi 4


int main(){
    LLI x[maxi], i, j, box, ans, tmp, cnt, check, arr[MAX];
    x[0] = 1;
    x[1] = 1;
    x[2] = 3;
    x[3] = 3;
    LLI avg, medi, range, missing;

    //printf ("%I64d %I64d %I64d %I64d\n", x[0], x[1], x[2], x[3]);

    scanf ("%I64d", &box);
    for (i = 0; i < box; i++) scanf ("%I64d", &x[i]);

   // printf ("After Input = %I64d %I64d %I64d %I64d\n", x[0], x[1], x[2], x[3]);

    avg = (x[0] + x[1] + x[2] + x[3]) / 4;
    //printf ("Avarage = %I64d\n", avg);

    medi = (x[1] + x[2]) / 2;
    //printf ("Median = %I64d\n", medi);

    range = x[3] - x[0];
    //printf ("Range = %I64d\n", range);

    if (box == 4 && (avg == 2 && medi == 2 && range == 2)){
        puts ("YES");
    }
    else if (box != 4 && (avg == 2 && medi == 2 && range == 2)){
        missing = 4 - box;
        puts ("YES");
        if (missing == 1) printf ("%I64d\n", x[3]);
        else if (missing == 2) printf ("%I64d\n%I64d\n", x[2], x[3]);
        else printf ("%I64d\n%I64d\n%I64d\n", x[1], x[2], x[3]);
    }
    else
        puts ("NO");


    return 0;
}
