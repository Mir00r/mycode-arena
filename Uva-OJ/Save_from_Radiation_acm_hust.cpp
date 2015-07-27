#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <queue>
#include <stack>
#include <set>
#include <vector>
#include <list>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define unsigned int

int main(){
    ll n, count, tmp;
    int t, c=0;
    scanf ("%d", &t);
    while(t--){
        scanf ("%lld", &n);
        tmp = n;
        count = 0;
        while (tmp > 0){
            tmp /= 2;
            count++;
        }
        printf ("Case %d: %lld\n", ++c, count);
    }
    return 0;
}
/*int get_ret(int x, int y){
    int ret = 1;
    for (int j = 1; j<= y; j++)
        ret *= x;
    return ret;
}
int main(){
    ll n, i;
    int t, c=0;
    scanf ("%d", &t);
    while(t--){
        scanf ("%lld", &n);
        n++;
        for (i = 0; i < 70; i++){
            if (get_ret(2, i) >= n)
                break;
        }
        printf ("Case %d: %lld\n", ++c, i);
    }
    return 0;
}*/
