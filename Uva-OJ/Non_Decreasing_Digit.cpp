#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <queue>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define row 70
#define col 70
#define MAX 9999

unsigned long long arr[70];
unsigned long long memo[77][10];
int done[77][10],cc=1;
unsigned long long n;
/*unsigned long long rec(int n){
    if(arr[n]!= -1) return arr[n];
    unsigned long long ans;
    ans = rec(n-1) + 3 * rec(n-1);
    arr[n] = ans;
    return arr[n];
}
*/
unsigned long long dp(int i,int prev){
    if(i == n){
        return 1;
    }
    if(done[i][prev] == cc)
        return memo[i][prev];
    unsigned long long j,res = 0;
    if(i==0){
        for(j=0;j<=9;j++){
            res = res + dp(i+1,j);
        }
    }
    else{
        for(j=prev;j<=9;j++){
            res =res + dp(i+1,j);
        }
    }
    done[i][prev] = cc;
    memo[i][prev] = res;
    return res;
}

int main(){
    int cases, caseNo;
    scanf("%d", &cases);
    while(cases--){
        scanf("%d %llu", &caseNo, &n);
        printf("%d %llu\n", caseNo, dp(0,0));
        cc++;
    }
    return 0;
}

