#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI  long long int
#define ULL unsigned long long
#define MAX 100
#define row 35
#define col 35

LLI  n, k, dp[row][col], factorial[MAX] = {1, 1};

LLI  fact (LLI  x){
    /*if (x == 0) return 1;
    else return x * fact(x-1);*/
    //factorial[0] = 1; factorial[1] = 1;
    if (factorial[x]) return factorial[x];
    else factorial[x] = x * fact(x-1);
    return factorial[x];
 }

LLI  nCk (LLI  n, LLI  k){
    if (n == k || k == 0) return 1;
    if (dp[n][k] != -1) return dp[n][k];
    LLI  &res = dp[n][k];
    res = nCk (n-1, k) + nCk (n-1, k-1);
    return res;
}

/*LLI  nPk (LLI  n, LLI  k){
    LLI  i, res, cnt, permu=1;
    res = fact(n) / fact(n-k);
    return res;
}*/

int main(){
    int tc, cs=1, i, j, tmp;
    LLI  combi, ans, check, permuta;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%lld%lld", &n, &k);
        memset (dp, -1, sizeof (dp));
        //if (k == 1) printf ("Case %d: %lld\n",cs++, n*n);
        if (k > n){
            printf ("Case %d: 0\n", cs++);
            continue;
        }
        combi = nCk (n, k);
        printf ("Combi = %lld\n", cs++, combi);
        check = fact(k);
        //printf ("check = %lld\n", cs++, ans);
        // permuta = nPk (n, k);
        //ans = combi * permuta;
        ans = combi * check * combi;
        printf ("Case %d: %lld\n", cs++, ans);

    }
    return 0;
}


/*int main(){
	LLI tc, cs=1, i, j, n, k, ans;
	scanf ("%lld", &tc);
	while (tc--){
		scanf ("%lld%lld", &n, &k);
		ans = 1;
		for(i = 0; i < k; i++){
			ans = ans * (n-i) / (i+1)*(n-i);
            printf ("%lld\n", ans);
		}
        //printf ("Case %lld: %lld\n", cs++, ans);
	}
	return 0;
}*/

/*LLI  nPk (LLI  n, LLI  k){
    LLI  i, res, cnt, permu=1;
    if (dp[n][k] != -1) return dp[n][k];
    res = dp[n][k];
    for (i = n, cnt = 1; cnt <= k; cnt++, i--) permu *= i;
    return res = permu;
}*/
