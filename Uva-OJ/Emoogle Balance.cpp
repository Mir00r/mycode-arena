#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 1000+10

int main(){
    int n, i, j, cs=1, reason[MAX], treat, party, cnt, ans;
    while (scanf ("%d", &n) == 1 && n){
        //for (i = 0; i < n; i++) scanf ("%d", &reason[i]);
        treat = party = 0;
        for (i = 0; i < n; i++){
            scanf ("%d", &reason[i]);
            if (reason[i] == 0) treat++;
            else party++;
        }
        printf ("Case %d: %d\n", cs++, party-treat);
    }
    return 0;
}

