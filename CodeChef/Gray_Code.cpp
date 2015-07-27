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
#define MAX 100005
#define row 70
#define col 70
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define eps 0.000000001


int main(){
    int tc, i, j, len, tmp, num, ans;
    char bin[MAX], ch;

    scanf ("%d", &tc);
    while (tc--){
        scanf ("%s", bin);
        len = strlen (bin);
        printf ("%c", bin[0]);

        for (i = 1; i < len; i++){
            //num = bin[i-1] - '0' + bin[i] - '0';
                if ( bin[i-1] - '0' == 1 && bin[i] - '0' == 1)
                    num = 0;
                else
                    num = bin[i-1] - '0' + bin[i] - '0';

            printf ("%d", num);
            //num = 0;
        }
        NL;
    }
    return 0;
}
