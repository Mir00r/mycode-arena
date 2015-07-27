#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <set>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long
#define LL __int64
#define ULL unsigned long long
#define row 55
#define col 55
#define MAX 100000+6
#define jora pair <LLI, LLI>
#define ff first
#define ss second
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 7477777


int main(){
    LL n, res=0, i;

    scanf ("%I64d", &n);

    for (i = 1; i <= n; i *= 10)
        res += n - i + 1;

    printf ("%I64d\n", res);

    return 0;
}



/*

int digit_cnt (int num){
    int cnt = 0;

    while (num != 0){
        cnt++;
        num /= 10;
        //printf ("%d\n", num);
    }

    return cnt;
}




int main(){
    int n, len, diff, div, mult, modu, ans;

    scanf ("%d", &n);

    len = digit_cnt (n);

    if (len == 1)
        ans = n;
    else if (len == 2){
        diff = n - 9;
        mult = diff * 2;
        ans = mult + 9;
    }
    else if (len == 3){
        diff = n - 99;
        mult = diff * len;
        ans = mult + 99 + 90;

    }
    else if (len == 4){
        diff = n - 999;
        mult = diff * len;
        ans = mult + 999 + 900;

    }
    else if (len == 5){
        diff = n - 9;
        mult = diff * 2;
        ans = mult + 9 + 4;
    }
    else if (len == 6){
        diff = n - 9;
        mult = diff * 2;
        ans = mult + 9 + 5;
    }
    else if (len == 7){
        diff = n - 9;
        mult = diff * 2;
        ans = mult + 9 + 6;
    }
    else if (len == 8){
        diff = n - 9;
        mult = diff * 2;
        ans = mult + 9 + 7;
    }
    else {
        diff = n - 9;
        mult = diff * 2;
        ans = mult + 9 + 8;
    }

    printf ("%d\n", ans);

    return 0;
}
*/
