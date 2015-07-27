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
#define MAX 1005
#define row 100
#define col 100
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)


int X_arr[] = {-1, 1, 0, 0};
int Y_arr[] = {0, 0, -1, 1};

LLI a, b, s;

/*LLI cal (LLI r, LLI c){
    int i, ax, bx, cnt=0;
    if (r >= 0 && c >= 0){
        cnt += (r+1, c);
        cnt += (r, c+1);
    }
    else if (r < 0 && c > 0){
        cnt += cal (r, c+1);
        cnt += cal (r-1, c);

    }
    else if (r < 0 && c < 0){
        cnt += cal ();
    }
    else{
        cnt += cal(r+1, c);
        cnt += cal(r-1, c);
    }
    if (r == 0 && c == 0)
        return cnt;
}


LLI cal_2 (LLI r, LLI c){
    int i, ax, bx, cnt=0;
     for (i = 0; i < 4; i++){
        //puts ("ok");
        cnt += (r + X_arr[i]);
        cnt += (c + Y_arr[i]);
     }
    if (r == 0 && c == 0)
    return cnt;
}
*/


int main(){
    LLI sum, x, y, diff;
    scanf ("%I64d %I64d %I64d", &a, &b, &s);
    sum = abs (a) + abs (b);
    diff = abs(sum - s);

    if (sum > s){
        puts ("No");
        //return 0;
    }

    else if ( diff % 2 == 0)
        puts ("Yes");
    else
        puts ("No");

    /*
     sum = cal (a, b);
    x = cal (a , b);
    y = cal_2(0, 0);
    printf ("X = %I64d  Y = %I64d\n", x, y);
    printf ("%I64d\n", sum);

    */
    return 0;
}
