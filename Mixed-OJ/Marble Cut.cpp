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
#define row 55
#define col 55
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define eps 0.000000001


int main(){
    LLI tc, l, b, mod, div, ans, tot;
    scanf ("%lld", &tc);
    bool check;
    while (tc--){
        scanf ("%lld %lld", &l, &b);
        tot = l * b;
        check = false;
        mod = tot% 3;

        if (mod == 0)
            puts ("YES");
        else
            printf ("NO %lld\n", mod);

    }
    return 0;
}


/*
        if (tot % 3 == 0){
            while (tot % 3 == 0){
                tot /= 3;
                check = true;
            }
        }
            //puts ("YES");
        else{
            mod = tot % 3;
            //printf ("NO %lld\n", mod);
        }
        //printf  ("%lld\n", tot);
        if (check)
            puts ("YES");
        else
            printf ("NO %lld\n", mod);


*/
