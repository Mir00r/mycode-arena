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
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define LLU long long unsigned
#define row 32
#define col 32
#define MAX 10006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 7477777


int main(){
    int tc, a, b, c, ans;
    scanf ("%d", &tc);

    while (tc--){
        scanf ("%d %d %d", &a, &b, &c);

        if ( (a+b+c) == 180 && (a != 0 && b != 0 && c != 0))
            puts ("YES");
        else
            puts ("NO");
    }
    return 0;
}
