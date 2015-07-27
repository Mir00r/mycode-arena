/*
    Source :- http://www.wikihow.com/Calculate-an-Expected-Value
    Based On this equ => Expect(x) = x1*(Px*x1)+x2*(Px*x2).....n*(Pn*n);
    Analysis :- Probability calculations.
                If there is the probability of 1/5 of the select gate to the right,
                then select the desired value is 5 times to the right door.
                If there is probability p selection to the correct door, then the expected value
                is 1 / p second choice to the correct door. The expected value of a penalty is
                sigma (pi * ti), and p is the probability of selection door so expectations are
                sigma (pi * ti) / p. Had to say will not get rid of the last error for the door,
                the result would choose to repeat the door.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define MAX 99999
#define eps 1e-9
#define pi 3.1415926535897932384626433832795
#define row 50
#define col 50

int main(){
    int tc, cs=1, i, j, n, cnt;
    double x, p, expect, proba, ans;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d", &n);
        expect = 0.0; proba = 1.0;
        for (i = 0; i < n; i++){
            scanf ("%lf%lf", &x, &p);
            if (x > 0){
                expect += (x*p);
                //printf ("Expect = %lf\n", expect);
                //proba -= p;
                //printf ("Proba = %lf\n", proba);
            }
            else{
                expect += ((-x)*p);
                //printf ("Neg_Expect = %lf\n", expect);
                proba -= p;
                //printf ("Neg_Proba = %lf\n", proba);
            }
        }
        ans = expect / proba;
        if (proba <= 0) printf ("Case %d: God! Save me\n", cs++);
        else printf ("Case %d: %.2lf\n", cs++, ans);
    }
    return 0;
}
