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
#define eps 1e-11

double memo[30][30];
double probability, res;
double dp(int x, int y, double z){
        res = 0;
    if (x == 25) return 1;
    if (y == 25) return 0;
    if (res != -1) return res;
    res = memo[x][y];
    if (z == 0) res = probability * (dp(x+1, y, !z)) + (1-probability) * (dp(x, y+1, !z));
    else res = probability * (dp(x+1, y, !z)) + (1-probability) * (dp(x, y+1, !z));
    memo[x][y] = res;
    return res;
}
int main(){
    int t, num_of_wins, tmp;
    double ans;
    scanf ("%d", &t);
    while (t--){
        memset (memo , -1, sizeof (memo));
        scanf ("%d%lf", &num_of_wins, &probability);
        ans = dp(0, 0, 0);
        printf ("%.2lf\n", ans);
    }
    return 0;
}


