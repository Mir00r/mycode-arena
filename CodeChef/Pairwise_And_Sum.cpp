#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <stack>
#include <map>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI long long int
#define pb push_back
#define MAX 100005

LLI arr[MAX], brr[MAX];


/*int main(){
    long long n,i,j,c[40]={0},x,ans=0;

    cin>>n;

    for(j = 1; j <= n; j++){
        cin >> x;
        i = 0;
        while(x > 0){
            if(x % 2 == 1)
                c[i]++;
            i++;
            x = x / 2;
        }
    }
    for(i = 0; i <= 31; i++)
    if(c[i] > 1)
        ans = ans + (c[i]*(c[i]-1)*pow(2,i)/2);

    cout<<ans;
}*/




/*int n,i,j,ai,kk[30]; // kk[i] equals to amount of numbers where the i-th bit is not a zero
long long ans=0; // answer to the problem

int main(){
	scanf("%d",&n); // size of the sequence
	for(i=0;i<n;i++){
		scanf("%d", &ai);
		for(j = 0; j < 30; j++)
            if(ai & (1 << j))
                ++kk[j]; // ai & (1<<j) isn't equal to zero only in case the j-th bit in ai is not a zero
	}
	for(j = 0; j < 30; j++)
        ans += 1LL*kk[j] * (1LL*kk[j]-1LL)*(1LL<<j); // calculate the answer according to the provided formula

	printf("%lld\n",ans/2LL);
	return 0;
}
*/




int main(){
    LLI tc, n, i, j, sum, tmp, cnt, ans;
    //scanf ("%d", &tc);
    while (scanf ("%lld", &n) == 1){
        for (i = 0; i < n; i++) scanf ("%lld", &arr[i]);

        sum = tmp = cnt = 0;

//        for (i = 0; i < n; i++){
//            for (j = i+1; j < n; j++){
//                sum += arr[i] + arr[j];
//                brr[i] = sum;
//            }
//        }
//
//        sort (brr, brr+n-1);
//        //ans = max (brr[n], brr[n-1]);
//        for (i = 0; i < n-1; i++) printf ("%d\n" , brr[i]);
        LLI maxn = 1 >> 25;

        for (i = 0; i < n; i++){
            //tmp = i;
            for (j = i+1; j < n; j++){
                sum += arr[i] &  arr[j];
                //printf ("%lld\n", sum);
            }
        }
        printf ("%lld\n", sum);
    }
    return 0;
}
