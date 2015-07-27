#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stack>
#include <queue>
#include <map>
#include <list>
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define L unsigned int
#define LL unsigned long long int
#define pf printf
#define sc scanf
#define pi 3.1415926535897932384626433832795
#define Nil -1
#define Inf 214687621357963218
#define MAX 2000

/*bool flag;
int arr[MAX], i, j;
int main(){
    int n, tmp, a;
    while (scanf ("%d", &n) == 1){
        for (i = 0; i < n; i++){
            scanf ("%d", &a);
            arr[a]++;
        }
        tmp = (n+1)/2;
        flag = true;
        for (i = 0; i < 10001; i++)
            if (arr[i] > tmp){
                flag = false;
                break;
            }
            if (flag = false)
                printf ("NO\n");
            else
                printf ("YES\n");
    }
    return 0;
}*/

//#include<stdio.h>
int a[10001];
int main(){
    int i,n,b;
    while (scanf("%d",&n) == 1){
        for(i = 0; i < n; i++){
            scanf("%d", &a[i]);
            //a[b]++;
        }
        int k = (n+1) / 2, f = 0;
        for(i = 0; i < 1001; i++)
            if(a[i] > k){
                f = 1;break;
            }
        if(f == 1)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
