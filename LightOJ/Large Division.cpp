#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 99999

int main(){
    char str[MAX];
    int tc, cs=1, i, j, len;
    ll a, ("%d", &tc);
    while (tc--){
        scanf ("%s%lld", str, &b);
        /*if (a < 0) a *= -1;
        if (b <b, div_res, sum;
    scanf  0) b *= -1;
        if (a % b == 0) printf ("Case %d: divisible\n", cs++);
        else printf ("Case %d; not divisible\n", cs++);*/
        if (b < 0) b *=- 1;
        len = strlen(str);
        sum = 0;
        for (i = 0; i < len; i++){
            if (str[i] == '-') continue;
            sum += (str[i] - '0');
            if (sum >= b) sum %= b;
            if (i != len && sum < b) sum *= 10;
            else if (i == len && sum > b) sum %= b;
        }
        if (sum == 0) printf ("Case %d: divisible\n", cs++);
        else printf ("Case %d: not divisible\n", cs++);
    }
    return 0;
}
