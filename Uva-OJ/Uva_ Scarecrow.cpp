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
#define MAX 1005
#define alpa 26
#define row 2005
#define col 2005
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)

int main(){


    int tc, cs=1, n, j, cnt, i;
    char str[MAX];
    scanf ("%d", &tc);
    while(tc--){

        scanf("%d %s", &n, str);
        cnt = 0;
        for(i = 0; i < n;){
            if(str[i] == '#')
                i++;
            else{
                cnt++;
                i += 3;
            }
        }
        printf("Case %d: %d\n", cs++, cnt);
    }
    return 0;
}
