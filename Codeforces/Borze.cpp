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

#define LLI __int64
#define ULL unsigned long long int
#define MAX 2005
#define row 30
#define col 30
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define eps 0.000000001


int main(){
    int i, j, len, ans, cnt=0;
    string borze;
    int bin[MAX];
    cin >> borze;
    len = borze.length ();

    for (i = 0; i < len; i++){
        if (borze[i] == '.')
            bin[cnt++] = 0;
        else if (borze[i] == '-' && borze[i+1] == '.'){
            bin[cnt++] = 1;
            i++;
        }
        else if (borze[i] == '-' && borze[i+1] == '-'){
            bin[cnt++] = 2;
            i++;
        }
    }

    for (i =0; i < cnt; i++)
        printf ("%d", bin[i]);
    NL;
    return 0;
}
