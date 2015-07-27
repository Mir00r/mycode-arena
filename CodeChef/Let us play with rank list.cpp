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
#define alpa 26
#define row 2005
#define col 2005
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)

int main(){
    LLI tc, n, s, sum, tmp, cnt, ans, i, j;
    scanf ("%lldd", &tc);
    while (tc--){
        scanf("%lld %lld", &n, &s);
        sum = (n * (n+1)) / 2;

        cnt = 0;
        n--;
        while (s < sum){
            sum -= n;
            cnt++;
            n--;
        }
        printf ("%lld\n", cnt);

//        if (n == 1 && s == 1) puts ("0");
//        else if (s % n == 0 && sum == s) puts ("0");
//        else if (s % n == 0 && sum < s) puts ("0");
//        else if (n == s) printf ("%d\n", n-1);

    }
    return 0;
}
