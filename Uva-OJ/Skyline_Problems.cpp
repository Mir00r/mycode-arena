#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define MAX 50005

int height[MAX];

int main(){
    int L, H, R, i, j, check, cnt, tmp , ans, flag;
    memset (height, 0, sizeof (height));
    while (scanf ("%d%d%d", &L, &H, &R) == 3){
        for (i = L; i < R; i++)
            if (H > height[i]) height[i] = H;
    }
    check = flag = cnt = ans = 0;
    for (j = 0; j != 10000; j++){
        if (height[i] != check)
            //if (flag) printf ("");
            //else flag = 1;
        printf ("%d %d", j, height[i]);
        check = height[i];
    }
    puts ("");
    return 0;
}
