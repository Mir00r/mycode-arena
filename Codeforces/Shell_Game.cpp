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
#define ULL unsigned long long LLI
#define MAX 250005+5
#define row 55
#define col 55
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define SET (a) memset(a, -1, sizeof(a))
#define CLR (a) memset(a, 0, s  izeof(a))
#define CH_CLR (a) memset(a, '\0', sizeof(a))
#define eps 1e9
#define mod 1000000007

int cup[5];

 int x, y, check, tmp;


int main(){

//    #ifdef Mir00r
        freopen ("input.txt", "r", stdin);
        freopen ("output.txt", "w", stdout);

 //   #endif

//    int x, y, check, tmp, i;

    int i;

   // CLR (cup);

    memset (cup, 0, sizeof (cup));

    scanf ("%d", &check);

    cup[check] = 1;

    for (i = 1; i <= 3; i++){
        scanf ("%d %d", &x, &y);

        tmp = cup[x];
        cup[x] = cup[y];
        cup[y] = tmp;
    }


    for (i = 1; i <= 3; i++){
        if (cup[i] == 1)
            printf ("%d\n", i);
    }

    return 0;
}
