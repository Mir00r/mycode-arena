#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define L long int
#define LL long long int
#define ULL unsigned long long
#define MAX 4294967

int main(){
    int n, i, j, p, cnt, tmp, ans;
    while (scanf ("%d", &n) == 1){
        cnt = 1; i = 0;
        while (cnt < n){
            if (i % 2 == 0) cnt *= 9;
            else cnt *= 2;
            //if (n <= 1) break;
            i++;
        }
        if (i % 2) printf ("Stan wins.\n");
        else printf ("Ollie wins.\n");
    }
    return 0;
}




/*int main(){
    int n, i, j, p;
    while (scanf ("%d", &n) == 1){
        for (i = 1; ; i++){
            if (i % 2 == 1) n /= 9;
            else n /= 2;
            if (n <= 1) break;
        }
        if (i % 2 == 0) printf ("Stan wins.\n");
        else printf ("Ollie wins.\n");
    }
    return 0;
}*/
