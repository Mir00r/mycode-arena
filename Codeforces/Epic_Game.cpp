#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 1000

int gcd (int x, int y){
    if (y == 0) return x;
    else return gcd (y, x % y);
}

int main(){
    int a, b, n, i, j, ans, check, tmp, cnt;
    scanf ("%d %d %d", &a, &b, &n);
    check = cnt = 0;
    while (n >= 0){
        //check = ans = 0;
        if (check % 2 == 0)
            n -= gcd (a, n);
        else
            n -= gcd (b, n);
        check++;
        /*if (check == 0){
            tmp = gcd (a, n);
            ans = n - tmp;
            printf ("sTmp = %d     sans = %d\n", tmp, ans);
            check = 1;
            break;
        }else{
            tmp = gcd (b, n);
            ans = n - tmp;
            printf ("a_Tmp %d     a_ans = %d\n", tmp, ans);
            check = 0;
            break;
        }*/
    }
    if (check % 2 == 0) puts ("0");
    else puts ("1");
    return 0;
}
