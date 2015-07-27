#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define MAX 1005

int main(){
    int tc, cs=1, i, j, cnt, tmp, check, n, Y, N, I, len;
    char str[MAX];
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d", &n);
        //for (i = 0; i < n; i++)
            scanf ("%s", str);
        N = Y = I = 0;
        //len = strlen (str);
        for (i = 0; i < n; i++){
            if (str[i] == 'Y') Y++;
            if (str[i] == 'N') N++;
            if (str[i] == 'I') I++;
        }
        //printf ("Y = %d     N = %d      I = %d\n", Y, N, I);
//        if (Y >= 1 && N >= 1 && I == 0) puts ("NOT INDIAN");
//        else if ( (N >= 1 && I >= 1 && Y == 0) || (I >= 1 && Y >= 1)) puts ("INDIAN");
//        //else if ((N >= 1 && Y == 0 && I == 0) || (Y >= 1 && N == 0 && I == 0)) puts ("NOT SURE");
//        else puts ("NOT SURE");
        if (I >= 1) puts ("INDIAN");
        else if (Y >= 1) puts ("NOT INDIAN");
        else puts ("NOT SURE");

    }
    return 0;
}
