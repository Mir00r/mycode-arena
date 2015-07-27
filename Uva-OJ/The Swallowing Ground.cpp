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
    int tc, ground, gap, y1, y2, i, j, flag;
    bool blank = false;
    scanf ("%d", &tc);
    while (tc--){
        if (blank) printf ("\n"); blank = true;
        scanf ("%d", &ground);
        flag = 0;
        scanf ("%d%d", &y1, &y2);
        gap = y1-y2;
        for (i = 1; i < ground; i++){
            scanf ("%d%d", &y1, &y2);
            if (y1-y2 != gap) flag = 1;
        }
        if (flag == 0) printf ("yes\n");
        else printf ("no\n");
    }
    return 0;
}

