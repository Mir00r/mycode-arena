#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI long long int
#define MAX 1000005

LLI arr[MAX], n;

int main (){
    LLI tc, i, j, sum, cnt, tmp, ans;
    bool check;
    scanf ("%lld", &tc);
    while (tc--){
        scanf ("%lld", &n);
        for (i = 0; i < n; i++) scanf ("%lld", &arr[i]);
        sum = cnt = tmp = 0;
        check = false;
        for (i = 0; i < n; i++){
            sum += arr[i];
           // printf ("Sum = %lld\n", sum);
            if (sum == 100 || sum == 101){
                check = true;
                break;
            }
//            else{
//                check = false;
//                break;
//            }
        }
        if (check) puts ("YES");
        else puts ("NO");
     }
    return 0;
}
