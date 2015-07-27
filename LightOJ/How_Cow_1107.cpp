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
#define MAX 105
#define row 100
#define col 100
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)

int main (){
    int tc, cs=1, i, j, x1, x2, y1, y2, x, y, cow;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d %d %d %d", &x1, &y1, &x2, &y2);
        printf ("Case %d:\n", cs++);
        scanf ("%d", &cow);
        while (cow--){
            scanf ("%d %d", &x, &y);
            if (x >= x1 && x <= x2 && y >= y1 && y <= y2)
                puts ("Yes");
            else
                puts ("No");
        }
    }
    return 0;
}
