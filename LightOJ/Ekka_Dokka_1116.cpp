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
    int tc, cs=1, i, j;
    ll w, b, c;
    scanf ("%d", &tc);
    while(tc--){
        scanf("%lld", &w);
        if(w % 2 != 0) printf("Case %d: Impossible\n",cs++);
        else{
            b = 1;
            while(w % 2 == 0){
                b *= 2;
                w = w/2;
            }
            printf("Case %d: %lld %lld\n", cs++, w, b);
        }
    }
    return 0;
}

/*int main(){
	int test, i;
	long long n, a;
	scanf("%d", &test);
	for(i = 1; i <= test; i++){
		scanf("%lld", &n);
		a = 1;
		while(!(n&1))
            a <<= 1, n >>= 1;
		if(a & 1)
            printf("Case %d: Impossible\n", i);
		else
            printf("Case %d: %lld %lld\n", i, n, a);
	}
	return 0;
}*/
