#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define MAX 10000
#define lit_max 15

int main(){
    LLI tc, M, S, arr[lit_max], num, i, j, sum, rem, len, cnt, tmp;
    char str[MAX];
    scanf ("%lld", &tc);
    while (tc--){
        scanf ("%s%lld", str, &S);
        for (i = 0; i < S; i++) scanf ("%lld", &arr[i]);
        len = strlen (str);
        bool check = false;
        sum = 0; // rem = 0;
//        for (i = 0; i < len; i++){
//            num += (str[i] - '0');
//            rem = num % arr[i];
//        }
        for (i = 0; i < S; i++){
            rem = 0; //scanf ("%lld", &arr[i]);
            for (j = 0; j < len; j++){
                //num += (str[j] - '48');
                num = rem * 10 + (str[j] - '0');
                rem = num % arr[i];
            }
            if (rem != 0){
                check = true; break;
            }
        }
        if (!check) printf ("%s - Wonderful.\n", str);
        else printf ("%s - Simple.\n", str);
    }
    return 0;
}
