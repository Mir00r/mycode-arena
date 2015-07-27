#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define ULL unsigned long long
#define MAX 60
#define row 10
#define col 10
#define eps 1e-9
#define pb push_back
#define NL puts ("")

int main(){
    int tc, cs=1, i, arr[MAX], n, k;
    scanf("%d\n", &tc);
    while (tc--){
        scanf("%d", &n);
        for(i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        k = n / 2;
        printf("Case %d: %d\n", cs++, arr[k]);
    }
    return 0;
}
