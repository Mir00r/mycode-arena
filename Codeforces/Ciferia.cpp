#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define LLI __int64
#define ULL unsigned long long
#define MAX 1000
#define row 100
#define col 100
#define inf (1 << 29)


int main(){
    int k, l, cnt, i, j, ans, tmp;
    scanf ("%d %d", &k, &l);
    cnt = 0;

//    if (l % k == 0){
//        //cnt= 0;
//        while (l != 1){
//            l /= k;
//            cnt++;
//        }
//        printf ("YES\n%d\n", cnt-1);
//    }
    while (l % k == 0){
        l /= k;
        cnt++;
    }
    if (l == 1 && cnt >= 0)
        printf ("YES\n%d\n", cnt-1);
    else
        puts ("NO");
    return 0;
}

