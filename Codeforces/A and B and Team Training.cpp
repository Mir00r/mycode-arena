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
#define MAX 105
#define row 70
#define col 70
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define eps 0.000000001


int main(){
    LLI xp, nb, i, j, a, b, ans, tmp, flag, tot, cnt, div;
    scanf ("%I64d %I64d", &xp, &nb);

    a = b = flag = cnt = 0;

    if (nb > xp) swap (xp, nb);

    tot = xp + nb;
    ans = tot / 3;
    ans = min (xp, ans);
    ans = min (nb, ans);

    printf ("%I64d\n", ans);
    return 0;
}



/*

    if (tot == 2) cnt = 0;
    else{
        while ( xp != 0 && nb != 0 && tot > 2){
            tot -= 3;
            cnt++;
        }
    }




//    div = tot / 3;
//

    //tmp = tot;
    //printf ("%I64d\n", tmp);



if (tot == 2) cnt = 0;
    else{
        while (xp != 0 && nb != 0){
//        tmp -= 3;
//        cnt++;

            if (xp > nb){
                xp -= 2;
                nb--;
                cnt++;
            }
            else{
                nb -= 2;
                xp--;
                cnt++;
            }
        }
    }






    do{
        tmp -= 3;
        cnt++;
    }while (tmp <= 2);


    for (i = 0; i < xp; i++){
        if (flag == 0){
            if (xp > 0 || nb > 0){
                puts ("kaa");
                xp -= 1;
                nb -= 2;
                a++;
                flag = 1;
            }
        }
        else if (flag == 1){
            if (xp > 0 || nb > 0){
                puts ("ok");
                xp -= 2;
                nb -= 1;
                b++;
                flag = 0;
            }
        }
    }

        printf ("%I64d %I64d\n", a, b);


*/
