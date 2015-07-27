#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <stack>
#include <map>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI long long int
#define pb push_back
#define MAX 100000005

LLI stone[MAX];
char str[MAX];

int main(){
    LLI tc, pile, i, j, sum, tmp, cnt, ans, maxn;
    scanf ("%lld", &tc);
    while ( tc--){
        scanf ("%lld", &pile);
        for (i = 0; i < pile; i++) scanf ("%lld", &stone[i]);

        sort (stone, stone+pile);
        sum = ans = cnt = 0;

//        if (pile % 2 == 0){
//            tmp = pile / 2;
//            for (i = pile; i >= tmp; i -= 2) sum += stone[i];
//        }
//        else{
//            tmp = (pile / 2) + 1;
//            for (i = pile - 1; i >= tmp; i -= 2) sum += stone[i];
//        }

        for (i = pile-1; i >= 0; i -= 2)
            sum += stone[i];
        printf ("%lld\n", sum);
    }
    return 0;
}

