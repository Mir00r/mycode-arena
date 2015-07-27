#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <set>
#include <map>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define ULL unsigned long long
#define MAX 10000005


typedef long long int lld;


lld Z, M, L, I;

lld Func(lld n){
    return ((Z*n) + I) % M;
}


int main(){
    lld  j, k, test, cs = 1, t, h, tot;

    while(scanf ("%lld %lld %lld %lld", &Z, &I, &M, &L) == 4){
        if(Z == 0 && I == 0 && M == 0 && L == 0) break;

        t = L;
        h = L;

        /* ai loop di a amra k_lemda ber korlam where K is
        the multiplier of lemda & k = Natural numeber-*/

        while(1){
            t = Func (t);           // tortois 1step kore jaitese ai jonno 1ta func cal dilam
            h = Func (Func (h));    // hare 2step kore jaitese ai jonno 2ta func call dilam
            if(t == h) break;
        }

        h = L;
        tot = 0;

        /* ai loop di a amra cycle er starting point ber korlam */

        while(t != h){
            t = Func (t);
            h = Func (h);
        }

//       printf ("%lld : %lld\n", h, t);

        h = Func (h);

//       printf ("2nd : %lld : %lld\n", h, t);
        tot = 1;

        /* ai loop di a amra cycle len ber korlam*/

        while(h != t){
            h = Func (h);
//          printf ("%lld : %lld\n", h, t);
            tot++;
        }
        printf ("Case %lld: %lld\n", cs++, tot);

    }
    return 0;
}


/*
map <int, int> mp;
int Z, L, I, M;


int main(){
    int i, j, cs = 1, ans, check, tmp, tot;
    while (scanf ("%d %d %d %d", &Z, &I, &M, &L) == 4){
        if (M == 0 && I == 0 && M == 0 && L == 0) break;
        tot = 1;
        mp[L] = tot++;
        L = (Z * L + I) % M;
        //printf ("F_L %d\n", L);
        while (!mp[L]){
            //puts ("OK");
            mp[L] = tot++;
            L = (Z * L + I) % M;
            //mp[tot++] = L;
//            mp[L] = tot++;
            //L = (Z * L + I) % M;
        }
        //printf ("TOT = %d   MAP = %d\n", tot, mp[L]);
        ans = tot - mp[L];
        printf ("Case %d: %d\n", cs++, ans);
        mp.clear();
    }
    return 0;
}


*/
