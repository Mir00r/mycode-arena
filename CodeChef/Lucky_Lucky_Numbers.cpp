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
#define MAX 2005
#define alpa 26
#define pb push_back
#define NL puts ("")


int main(){
    int tc, n, rem, div, ans, i;
    bool check;

    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d", &n);
        if (n % 7 == 0){
            printf ("%d\n", n/7);
            puts ("ok");
        }
        else{

            div = n / 7;
            printf ("Div = %d\n", div);

            check = false;
            for (i = div; i >= 0; i--){
                rem = n - (i*7);
                printf ("Rem = %d\n", rem);
                if (rem % 4 == 0){
                    printf ("%d\n", i*7);
                    check = true;
                    break;
                }
            }
        }

        if (!check) puts ("-1");
    }
    return 0;
}
