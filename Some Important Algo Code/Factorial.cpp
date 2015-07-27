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


// Calculate upto 1000 factorial

int main(){
    int t,a[160],n,i,j,temp,m,x, b;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);

        a[0]=1;
        m=1;
        temp = 0;

        for(i=1;i<=n;i++){
            for(j = 0; j < m; j++){
                x = a[j] * i + temp;

                a[j] = x % 10;
                temp = x / 10;
            }

            while(temp != 0){
                a[m] = temp % 10;
                temp = temp / 10;
                m++;
            }
        }
        for(i = m-1; i >= 0; i--)
            printf("%d",a[i]);
//            b = a[i];
  //      printf ("%d", b);

        printf("\n");
    }
    return 0;
}
