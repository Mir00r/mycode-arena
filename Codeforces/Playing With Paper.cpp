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
#define CLR (a) memset(a, 0, sizeof(a))
#define CH_CLR (a) memset(a, '\0', sizeof(a))
#define eps 1e9
#define mod 1000000007

LLI gcd (LLI x, LLI y){

    if (y == 0)
        return x;
    else
        return gcd (y, x % y);

}


int main (){
    LLI a, b, x, y, area, ans, tmp, cnt, diff;

    scanf ("%I64d %I64d", &a, &b);

    cnt = diff = ans = 0;

    while (b > 0){
        ans += (a / b);
        //tmp = a;
        tmp = b;

        b = a % b;
        a = tmp;
    }
    printf ("%I64d\n", ans);

  //  printf ("%I64d\n", gcd (a, b) );


    return 0;
}




/*
 area = a * b;

    if (b == 1)
        printf ("%I64d\n", a);

//        x = a - b;

        while (1){
            x = abs (a - b);
       //    tmp = abs (a - b);

     //       printf ("%I64d\n", a);
            ans = ceil (area / x);

            //printf ("%I64d\n", ans);

            if (x < b){
               // swap (a, b);

                a = b;
                b = x;

            }
           // cnt++;

            if (x <= 0){
                printf ("%I64d\n", ans);
   //             printf ("%I64d\n", cnt);

                return 0;
               // break;
            }

        }
//        printf ("%I64d\n", cnt);

*/
