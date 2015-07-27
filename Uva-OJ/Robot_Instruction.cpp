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
    int tc, direc_num, dir, i, j, inst, tmp, cnt, ans, arr[MAX];
    char direction[MAX];
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d", &direc_num);
        inst = 0;
        for (i = 1; i <= direc_num; i++){
            scanf ("%s", direction);
            if (strcmp (direction, "LEFT") == 0){
                inst -= 1;
                arr[i] =-1;
            }
            else if (strcmp (direction, "RIGHT") == 0){
                inst += 1;
                arr[i] = 1;
            }
            else{
                scanf ("%s%d", direction, &dir);
                inst += arr[dir];
                arr[i] = arr[dir];
            }
        }
        printf ("%d\n", inst);
    }
    return 0;
}
