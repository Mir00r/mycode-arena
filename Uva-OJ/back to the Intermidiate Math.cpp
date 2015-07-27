#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 9999

int main(){
    int t, cs=1, u, v, d, tmp;
    double time_1, time_2, ans;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d%d", &d, &v, &u);
        tmp = u*u - v*v;
        if(u == 0 || v == 0 || u <= v) printf("Case %d: can't determine\n", cs++);
        else{
            time_1 = d*1.0 / u;
            time_2 = d*1.0 / sqrt(tmp);
            ans = time_2 - time_1;
            printf("Case %d: %.3lf\n", cs++, ans);
        }
    }
    return 0;
}

/*int main(){
    int width, u, v, i, j, tmp, t, cs=1;
    double time_1, time_2, ans;
    scanf ("%d", &t);
    while (t--){
        scanf ("%d%d%d", &width, &u, &v);
        //time_1 = time_2 = 0.0;
        tmp = u*u - v*v;
        if (u == 0 || v == 0) printf ("Case %d: can't determine\n", cs++);
        else{
            time_1 = width*1.0 / u;
            time_2 = width*1.0 / sqrt(tmp);
            ans = time_2 - time_1;
            printf("Case %d: %.3lf\n",cs++, ans);
        }
    }
    return 0;
}*/
