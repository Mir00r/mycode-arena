
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
#define MAX 100002
#define row 100
#define col 100
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define eps 0.000000001


int find_four (int v){
    int div, mod, val, cnt=0;
    val = v;

    while (val != 0){
        mod = val % 10;
        if (mod == 4)
            cnt++;
        val /= 10;
    }
    //printf ("Mod = %d    val = %d\n", mod, val);
    return cnt;
}

//int num_len (int n){
//    int num, cnt=0;
//    num = n;
//    while (num != 0){
//            cnt++;
//            num /= 10;
//    }
//    //printf ("%d\n", cnt);
//    return cnt;
//}


int main(){
    int tc, i, j, n, len, ans,tmp, cnt, num;

    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d", &n);
        //len = num_len(n);

        ans = find_four(n);

        printf ("%d\n", ans);

    }
    return 0;
}


/*
        num = n;
        cnt = 0;
        int mod;
        while (num != 0){
            mod = num % 10;
            if (mod == 4)
                cnt++;
            num = num / 10;
        }

*/
