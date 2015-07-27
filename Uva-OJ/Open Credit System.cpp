#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 160000

int main(){
    int tc, n, arr[MAX], i, j, tmp, ans, maxn, maxn_diff;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d", &n);
        for (i = 0; i < n; i++) scanf ("%d", &arr[i]);
        maxn = -160000; maxn_diff = -160000;
        for (i = 0; i < n-1; i++){
            if (arr[i] > maxn) maxn = arr[i];
            tmp = maxn - arr[i+1];
            if (tmp > maxn_diff) maxn_diff = tmp;
        }
        printf ("%d\n", maxn_diff);
    }
    return 0;
}






/*
const int maxn = 100010;
int A[maxn];
int n;

void read_case(){
	scanf("%d", &n);
	for(int i = 0; i < n; i++) scanf("%d", &A[i]);
}

void solve(){
	read_case();
	int Si = 0, Si2 = 0, Sj = 1;
	int ans = A[0]-A[1];
	int MaxAi = A[0];
	for(int j = 1; j < n; j++){
		if(ans < MaxAi-A[j]){
			ans = MaxAi-A[j];
			//Si2 = Si;
			//Sj = j;
		}
		if(MaxAi < A[j]){
			MaxAi = A[j];
			//Si = j;
		}
	}
	//printf("%d %d %d\n", ans, Si2, Sj);
	printf("%d\n", ans);
}

int main(){
	int T;
	scanf("%d", &T);
	while(T--)
		solve();
	return 0;
}

*/
