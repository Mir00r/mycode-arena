#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 8888

int main(){
    int n, x, y, i, j, sum=0, jog=0, add=0, cnt, tmp, trash, ans;
    while (scanf ("%d", &n) == 1){
        for (i = 0; i < n; i++){
            scanf ("%d%d", &x, &y);
            sum += x;
            jog += y;
            //add += ((x%2) != (y%2));
            tmp = x%2; trash = y%2;
            if (tmp != trash){
                add += tmp;
                add += trash;
            }
        }
        if (sum % 2 == 0 && jog % 2 == 0) printf ("0\n");
        else if (add % 2 == 0 && add > 0) printf ("1\n");
        else printf ("-1\n");
    }
    return 0;
}
