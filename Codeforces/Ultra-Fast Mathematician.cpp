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
#define MAX 110

int main(){
    int a, b, ans, XOR_res, i, j, mod, bin[MAX], num, cnt, tmp;
    char str[MAX], ch[MAX], res;
    while (~ scanf ("%s%s", str, ch)){
        //XOR_res = a^b;
        int len = strlen (str);
        for (i = 0; i < len; i++) //res = str[i] ^ ch[i];
        printf ("%d", str[i] ^ ch[i]);

        /*num=0;
        tmp = XOR_res;
        while (tmp > 0){
            mod = tmp % 2;
            bin[num] = mod;
            tmp /= 2;
            num++;
        }
        for (i = num-1; i >= 0; i--) printf ("%d", bin[i]);*/
        printf ("\n");
    }
    return 0;
}
