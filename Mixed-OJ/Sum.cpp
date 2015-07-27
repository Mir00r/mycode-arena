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



int main (){
    int n, sum = 0, res;

    while (scanf ("%d", &n) == 1){
//        sum = ( n * (n + 1 ) ) / 2;

        if (n == 0){
            puts ("1");
            continue;
        }

        if (n < 0){
            n *= (-1);

            sum = ( n * (n + 1 ) ) / 2;

            res = sum - 1;
            res *= (-1);

            printf ("%d\n", res  );
        }
        else{
            sum = ( n * (n + 1 ) ) / 2;
            printf ("%d\n",  sum );
        }
    }

    return 0;
}
