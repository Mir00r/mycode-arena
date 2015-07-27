#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define L long int
#define LL long long int
#define ULL unsigned long long
#define MAX 10000
#define eps 1e-9
#define pi 3.1415926535897932384626433832795

int main(){
    int tc, cnt, cs=1, i, j;
    double length, width, depth, weight, res, sum, tmp;
    //scanf ("%d", &tc);
    while (scanf ("%d", &tc) == 1){
        cnt = 0; //bool flag = false;
        for (i = 0; i < tc; i++){
            scanf ("%lf%lf%lf%lf", &length, &width, &depth, &weight);
            sum = length + width + depth;
            if (((length <= 56 && width <= 45 && depth <= 25) || sum <= 125) && weight <= 7){
                cnt++; puts ("1");
            }
            else puts ("0");
        }
        printf ("%d\n", cnt);
    }
    //printf ("%d\n", cnt);
    return 0;
}


/*int main(){
    //freopen("in.txt","r",stdin);
    int n, i;
    while( scanf("%d", &n) != EOF ){
        int Cnt = 0 ;
        for(i = 0; i < n; i++){
            double len , wid , dep , wgth ;
            scanf("%lf %lf %lf %lf",&len , &wid , &dep ,&wgth);
            if( ( (len <= 56.00 && wid <= 45.00 && dep <= 25.00 ) || ( len + wid + dep <= 125.00 ) ) && wgth <= 7.00 ){
                  Cnt++ ; puts("1");
            }
            else puts("0");
        }
        printf("%d\n",Cnt);
    }
    return 0;
}*/
