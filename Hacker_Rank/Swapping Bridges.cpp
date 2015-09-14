// Abdur Razzak
// Daffodil International University

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
#define row 205
#define col 205
#define MAX 50006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 7477777
#define PI 3.1415926535897932384626433832795


int bridge[MAX], n;

int main(){
    int i, j, tc, ans;

    scanf ("%d", &tc);

    while (tc--){
        scanf ("%d", &n);
        for (i = 1; i <= n; i++)
            scanf ("%d", &bridge[i]);

        ans = 0;

        for (i = 1; i <= n; i++){
            if (i == bridge[i])
                ans++;
        }

        printf ("%d\n", ans);
    }
    return 0;
}
