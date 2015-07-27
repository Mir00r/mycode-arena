#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <queue>
#include <stack>
#include <vector>
#include <list>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI long long int
#define ULL unsigned long long int
#define MAX 100005
#define row 70
#define col 70
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define eps 0.000000001

LLI bit[105];


//int fun(int n) {
//    if (n == 0)
//        return 1;
//    if (n == 1)
//        return 2;
//    return fun(n-1) + fun(n-1);
//}

LLI save_bit (){
    LLI i, tmp = 2, val;
    bit[0] = 1;
    bit[1] = 1;
    for (i = 2; i <= 100; i++){
        val = tmp * 2;
        bit[i] = val;
        tmp *= 2;
    }
}


int main(){
    save_bit();
    LLI n, i, j, ans, tmp, cnt;
    while (scanf("%lld", &n) == 1){
       // printf ("%d\n", fun(n));
        printf ("%lld\n", bit[n]);
    }
    return 0;
}
