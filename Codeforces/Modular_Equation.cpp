#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <set>
#include <map>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define ULL unsigned long long
#define MAX 10000005

LLI a, b, n;

LLI func (LLI y){
    return a % y;
}

int main(){
    LLI ans, tmp, cnt, i, check, x, y, root, diff;
    scanf ("%I64d %I64d", &a, &b);
    cnt = check = 0;
//    for (i = 1; i <= a; i++)
//        if (func(i) == b){
//            cnt++;
//            check = 1;
//        }
    diff = a - b;
    root = sqrt (diff);

    for (i = 1; i <= root; i++){
        //if (func(i) == b) cnt++;
        if (! (diff % i)){
            //if (diff / i)
            x = i;
            y = diff / i;

            if (x > b){
                cnt++;
               // puts ("X Ok");
            }
            if (x != y && y > b){
                cnt++;
                //puts ("Y ok");
            }
           // printf ("X = %I64d  Y = %I64d\n", x, y);
        }
    }

    if (diff == 0) puts ("infinity");
    else printf ("%I64d\n", cnt);
    return 0;
}

