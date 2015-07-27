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
#define MAX 105
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

int signal[MAX];
char str[105];



int main(){

//    #ifdef Mir00r
     //   freopen ("input.txt", "r", stdin);
     //   freopen ("output.txt", "w", stdout);

 //   #endif

    int  n, i, j, cnt, ans;
    bool check = false;
    cnt = 0;
    int flag = 1;

    scanf ("%d%S", &n, str);

    for (i = 0; i < n; i++)
        if (str[i] == '1')
            signal[cnt++] = i;

//    for (i = 0; i < cnt; i++)
//        printf ("%d ", signal[i]);
//
//    NL;

  //   printf ("%d\n", cnt);

    for (i = 1; i+1 < cnt; i++){
        if (signal[i] - signal[i-1]  != signal[i+1] - signal[i])
            check = true;
//            flag = 0;
    }

    if (check)

        puts ("YES");
    else
        puts ("NO");


    return 0;
}

