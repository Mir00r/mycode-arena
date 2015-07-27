#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 2005

/*int main (){
    int n, x, candy, cnt, tmp, ans, check, i, j;
    int type[MAX], height[MAX], mass[MAX];
    scanf ("%d%d", &n, &x);
    for (i = 0; i < n; i++) scanf ("%d%d%d", &type[i], &height[i], &mass[i]);
    candy = cnt = 0;
    //for (i = 0; i < n; i++) printf ("%d %d %d\n", type[i], height[i], mass[i]);
    tmp = -1;
    for (i = 0; i < n; i++){
        if (tmp != type[i] && x >= height[i]){
            candy++;
            x += mass[i];
            printf ("X = %d\n", x);
            tmp = type[i];
            printf ("TMP = %d\n", tmp);
        }
    }
    printf ("%d\n", candy);
    return 0;
}*/

