#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 105

/*int main(){
    int n, m, a[MAX], b[MAX], i, j, ans, mx_res, cnt, tmp;
    while (scanf ("%d%d", &n, &m) == 2){
        ans = -1;
        for (i = 0; i < n; i++) scanf ("%d", &a[i]);
        for (j = 0; j < m; j++) scanf ("%d", &b[j]);
        sort (a, a+n);
        sort (b, b+m);
        mx_res = max (a[n-1], a[0]*2);
        if (mx_res < b[0]) ans = mx_res;
        printf ("%d\n", ans);
    }
    return 0;
}
*/

int main()
{
    int tw=0,fi=0,k,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&k);
        if(k==25)tw++;
        else if(k==50){tw--;fi++;}
        else
        {
        if(fi){fi--;tw--;}
        else tw-=3;
        }
        if(tw<0 || fi<0)break;

    }
    if(i==n)printf("YES");
    else printf("NO");
    return 0;
}
