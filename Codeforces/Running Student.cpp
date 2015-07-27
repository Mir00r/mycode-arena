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
#define MAX 100005
#define row 100
#define col 100
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define eps 0.000000001


int main(){
    double n, vb, vs, xu, yu, bi, si, maxn, time;
    double bus[100];
    int i, ans;

    scanf ("%lf %lf %lf", &n, &vb, &vs);
    for (i = 0; i < n; i++)
        scanf ("%lf", &bus[i]);
    scanf ("%lf %lf", &xu, &yu);

    //minx = ans = time = 0;
    maxn = inf;
    for (i = 1; i < n; i++){

        bi = bus[i] / vb;
        si = sqrt ( (bus[i] - xu) * (bus[i] - xu) + (yu*yu) ) / vs;

        //time = min (time, (bi+si));
        time = bi + si;
        if (time < maxn + eps){
            maxn = time;
            ans = i;
        }
    }
    printf ("%d\n", ans+1);
    return 0;
}

