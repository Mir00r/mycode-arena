#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stack>
#include <queue>
#include <vector>
#include <list>
#include <iostream>
#include <algorithm>

using namespace std;
#define l long int
#define ll long long int
#define unsigned int

int main(){
    int n, i, result, rem, stars;
    while(scanf ("%d", &n) == 1){
        result = 1;
        for (i = 2; i <= n/i; ++i){
            if (n % i == 0){
                rem = 1;
                while (n % i == 0){
                    n /= i;
                    //printf ("n = %d\n", n);
                    rem *= i;
                    //printf ("Rem = %d\n", rem);
                }
                result *= rem - rem/i;
                //printf ("Result = %d\n", result);
            }
        }
        if (n > 1)
            result *= n-1;
        stars = (result + 1) / 2;
        printf ("%d\n", stars);
    }
    return 0;
}

/*int main(){
    int t,count,n,p,count1,i,carry=0,total,k=0;
    int array[500];
    scanf("%d",&t);
    for(count=1;count<=t;count++){
        scanf("%d",&n);
        array[499]=1;
        if(n>1){
            printf("*");
            for(count1=2;count1<=n;count++){
                carry=0;
                for(i=0;i<n;i++){
                    array[499-i]=(array[499-i]*count1)+carry;
                    if(array[499-i]>9){
                        carry=array[499-i]/10;
                        array[499-i]=array[499-i]%10;
                        if(count1==n)
                            k++;
                    }
                    else if(array[499-i]<=9){
                        carry=0;
                        if(count1==n)
                            k++;
                    }
                }
            }
        }
        if(n==1)
            k=1;
            for(p=500-k;p<500;p++)
          //for(p=475;p<500;p++)
                printf("*%d",array[500-k]);
                printf("*");
    }
    return 0;
 }*/

/*int main(){
    int n, res, rem, i;
    while(scanf("%d",&n) == 1){
        res = 1;
        for(i = 2; i <= n/i; ++i){
            if(n % i == 0){
                rem = 1;
                while(n % i == 0){
                    n /= i;
                    rem *= i;
                }
                res *= rem - rem / i;
            }
        }
        if(n > 1) res *= n - 1;
        int stars = (res + 1) / 2;
        printf ("%d\n", stars);
    }
    return 0;
}*/
