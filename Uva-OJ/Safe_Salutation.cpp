#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <stack>
#include <map>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI long long int
#define pb push_back
#define MAX 100005

LLI fibo[MAX], fact[MAX];

LLI cata[MAX];

/*void fibo_gen(){
    int i;
    fibo[0] = 1;
    fibo[1] = 2;
    for (i = 2; i <= 20; i++)
        fibo[i] = fibo[i-1] + fibo[i-2];
}*/

/*LLI facto (LLI a){
    if (a == 0) return 0;
    else if (a == 1) return 1;
    else if (a == 2) return 2;
    else return a * facto(a-1);
}*/

/*void facto (){
    LLI i;
    fact[0] = 1;
    for (i = 1; i <= 32; i++)
        fact[i] = fact[i-1] * i;
}*/

LLI bino_cof (LLI n, LLI k){
    LLI res = 1, i;
    if (k > n - k) k = n - k;
    for (i = 0; i < k; i++){
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

LLI catalan (LLI n){
    LLI res, ct;

    ct = bino_cof(2*n, n);

    res = ct / (n+1);

    return res;
}


int main (){
    //fibo_gen ();
    //facto ();
    bool blank = true;
    LLI n, i, j, ans, tmp, x, y, z;
    while (scanf ("%lld", &n) == 1){
        if (!blank)
            puts ("");
            blank = false;


//        x = 2*n;
//        y = n+1;
//        z = facto(n);
//        ans = facto(x) / (facto(y) * z);
        //ans = fact[2*n] / (fact[n+1] * fact[n] );
        ans = catalan (n);

        printf ("%lld\n", ans);
    }
    return 0;
}

