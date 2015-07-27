#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define eps 1e-11
#define MAX 999

int arr[MAX];

/*int get_result (int j, int n, int *arr){
    int sum = 0, tmp;
    if (j <= n){
        if (j % 2 != 0 && j > 20){
            tmp = j;
            sum += tmp;
            get_result(j+1, n-1, arr);
        }
        else{ sum = 0;
            get_result(j+1, n-1, arr);
        }
    }
    return sum;
}*/
/*int main(){
    int t, c = 0, n, tmp, ans;
    scanf ("%d", &t);
    while (t--){
        int sum = 0;
        scanf ("%d", &n);
        for (i = 0; i < n; i++){ scanf ("%d", &arr[i]);
            if (arr[i] % 2 != 0 && arr[i] > 20) sum += arr[i];
        }
           //ans = get_result(0, n-1, arr);
        printf ("Case %d: %d\n", ++c, sum);
    }
    return 0;
}*/

int a[MAX], sum;
void get_res(int i,int n){
    if (i >= n) return;
        if (a[i] > 20){
            if (a[i] % 2 != 0)
                sum += a[i];
        }
        get_res(i+1, n);
    //return sum;
}
int main (){
    int t, c = 0, n;
    scanf ("%d", &t);
    while (t--){
        scanf ("%d",&n);
        for (int i = 0; i < n; i++)
            scanf ("%d",&a[i]);
        sum = 0;
        get_res(0, n);
        printf ("Case %d: %d\n", ++c, sum);
    }
    return 0;
}
