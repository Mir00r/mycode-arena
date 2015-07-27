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


int main (){
    int len, i, j, ans, tmp;
    char str[12];

    scanf ("%s", str);
    len = strlen (str);

    ans = 0;
    for (i = 0; i < len ; i++){
        ans *= 2;

        if (str[i] == '4')
            ans++;
        else
            ans += 2;
    }

    printf ("%d\n", ans);
    return 0;
}
