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
#define alpa 26
#define row 2005
#define col 2005
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)


int len, n, memo[MAX][2][2];
char chain[MAX], str[MAX];


/*int make_chain (int ind, int left, int cur_pos){
    if (ind == len){
        if (left == 1)
            return 0;
        else
            return inf;
    }

    int &res = memo[ind][left][cur_pos];
    if (res != -1) return res;


    if (chain[ind] == '+'){
        // boishaile ki hob a
        res = make_chain(ind+1, 1, 1) + 1;

        //  Na boshaile ki hob a
        if (left)
            res = min (res, make_chain(ind+1, 1, 0));
        else
            res = min (res, make_chain(ind+1, cur_pos, 0));

        res = min (res, res);

    }
    else{
        res = make_chain(ind+1, 1, 1) + 1;

//        if (chain[ind] == '-')
//            res = min (res, make_chain(ind+1, 0, 0));
//        else
//            res = min (res, make_chain(ind+1, cur_pos, 0));
//
//        res = min (res, res);
    }
    memo[ind][left][cur_pos] = res;

    return res;

}*/


int main(){

//        #ifdef Mir00r

//        freopen("input.txt","r",stdin);
//        freopen("output.txt","w",stdout);
//
  //  #endif

    int tc, ans, i, a, b, plus, minus, c1,c2;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%s", chain);
        len = strlen (chain);
       // memset (memo, -1, sizeof (memo));
        //ans = make_chain (0, 1, 0);

        //ans = min (make_chain(0, 1, 0),  make_chain(0, 0, 0));

        plus = minus = c1 = c2 = 0;
        for (i = 0; i < len; i++){

            if (i % 2 == 0 && chain[i] != '-')
                c1++;
            else if (i % 2 != 0 && chain[i] != '+')
                c1++;

            if (i % 2 == 0 && chain[i] != '+')
                c2++;
            else if (i % 2 != 0 && chain[i] != '-')
                c2++;
        }

//        if (c1 < c2) ans = c1;
//        else ans = c2;

        ans = min (c1, c2);

        printf ("%d\n", ans);
    }
    return 0;
}




/*
int tc, cnt, i, len, plus, minus;
    //char str[MAX];
    scanf ("%d", &tc);
    while(tc--){

        scanf("%s", str);
        cnt = plus = minus = 0;
        len = strlen (str);
        for(i = 0; i < len; i++){
            if(str[i] == '+')
                plus++;
            else{
                minus++;
                //i += 3;
            }
        }
        if (plus == minus)
            printf("%d\n", plus / 2);
        else if (plus > minus)
            printf ("%d\n", plus/ 2);
        else
            printf ("%d\n", minus / 2);
    }

*/
