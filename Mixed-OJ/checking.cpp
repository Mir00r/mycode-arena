#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <queue>
#include <stack>
#include <vector>
#include <list>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI long long int
#define ULL unsigned long long int
#define MAX 50005
#define pb push_back
#define NL puts ("")






int main()
{
    int a,b,c=0;
    scanf("%d %d",&a,&b);
    c=c+a;
    while(a>=b)
     {
         a=a/b;
         c=c+a;
    }
          printf("%d",c);
          return 0;
}





/*int min(int, int, int);

int subArraySum(int arr[], int n, int sum){

    int curr_sum = arr[0], start, i, cnt;

    start = cnt = 0;
    for (i = 1; i <= n; i++){
        while (curr_sum > sum && start < i-1){
            curr_sum = curr_sum - arr[start];
            start++;
        }

        if (curr_sum == sum){
          //  cnt++;
            printf ("Sum found between indexes %d and %d", start, i-1);
            return 1;
        }

        if (i < n)
          curr_sum = curr_sum + arr[i];
    }
    //printf ("%d\n", cnt);
    printf("No subarray found");
    return 0;
    //return cnt;
}

int main(){
    int arr[] = {1, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 3;

//    int n, s, ans, arr[MAX], i;
//    while (scanf ("%d %d", &n, &s) == 2){
//        for (i = 1; i <= n; i++)
//            arr[i] = i;
//        ans = subArraySum(arr, n, s);
//        printf ("%d\n", ans);
//    }
    subArraySum(arr, n, sum);
    return 0;
}*/



/*int main(){

    char a[size];
    char b[size];
    static int dp[MAX+1][MAX+1];

    int t;
    int n, m;
    int i, j, k;

    scanf("%d", &t);
    for (i = 0; i < t; i++){
        scanf("%s%s", (a+1), (b+1));

        m = strlen(a+1);
        n = strlen(b+1);

        //printf("%s\n%s\n", a+1, b+1);

        for (j = 0; j <= n; j++) {
            dp[0][j] = j;
        }

        for (j = 0; j <= m; j++) {
            dp[j][0] = j;
        }

        for (j = 1; j <= m; j++) {
            for (k = 1; k <= n; k++) {
                if (a[j] == b[k]){
                    dp[j][k] = dp[j-1][k-1];
                }
                else {
                    dp[j][k] = min(dp[j][k-1]+1, dp[j-1][k]+1, dp[j-1][k-1]+1);
                }
            }
        }
        printf("%d\n", dp[m][n]);
    }
    return 0;
}*/

















/*int max(int a,int b){
     if(a>=b)
             return a;
     return b;
}

int main(){
        int dp[205],i,j,count,sum;
         for(i=0;i<205;i++)
              dp[i]=0;
         int T;
         char segment[220];
         scanf("%d",&T);
         while(T>0)
         {
                  scanf("%d",&N);
                  scanf(" %s",segment);
                  dp[0]=segment[0]-'0';
                  for(i=1;segment[i]!='\0';i++)
                  {
                         dp[i]=dp[i-1];
                         count=0;
                         for(j=i;j>=0;j--)
                         {
                                if(segment[j]=='1')
                                       ++count;
                                else
                                       --count;
                                if(count>0)
                                {
                                         sum=i-j+1;
                                         if(j>0)
                                              sum+=dp[j-1];
                                         dp[i]=max(dp[i],sum);
                                }
                         }
                  }
                  printf("%d\n",dp[i-1]);
                  --T;
         }
         return 0;
}
*/




