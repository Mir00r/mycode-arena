#include <stdio.h>
#include <string>
#include <string.h>
#include <math.h>
#include <map>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <stdlib.h>
#include <iostream>
#include <algorithm>

using namespace std;

typedef long long int lld;

#define Max 10009



int main(){

//    #ifdef Fused
////    freopen("input.txt", "r", stdin);
////    freopen("vomit.txt", "w", stdout);
//    #endif


    lld i, j, k, test, kase = 0;
    lld a, b, c, x, y;
    cin >> x >> y >> c;

        bool yes = true;

        if(c>x+y) yes = false;
        else if( x>=c || y>=c){
            a = 0;
            b = c;
        }
        else{
            a = c - min(x,y);
            b = min(x,y);
        }

        if(a>x){
            k = a;
            a = b;
            b = k;
        }

        if(b>y){
            k = b;
            b = a;
            a = k;
        }

        if(yes) cout << a << " " << b << endl;
        else
            printf ("Impossible\n");


    return 0;
}
