#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define LL long long int
#define ULL unsigned long long
#define MAX 9999

int main(){
    int a, b, way, fast, secnd, tmp, cnt, i, j, ans;
    while (scanf ("%d%d", &a, &b) == 2){
        //way = abs (a-b);
        way = fast = secnd = 0;
        for (i = 1; i <= 6; i++){
            if (abs (i-a) < abs (i-b)) way++;
            else if (abs (i-a) > abs (i-b)) secnd++;
            else fast++;
        }
        printf ("%d %d %d\n", way, fast, secnd);
    }
    return 0;
}


/*int main(){
    int a, b, way, fast, secnd, tmp, cnt, i, j, ans;
    while (scanf ("%d%d", &a, &b) == 2){
        way = abs (a-b);
        fast = secnd = 0;
        for (i = 1; i <= 6; i++){
            if (abs (i-a) > abs (i-b)) secnd++;
            else fast++;
        }
        printf ("%d %d %d\n", way, fast, secnd);
    }
    return 0;
}*/
