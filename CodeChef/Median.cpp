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
#define MAX 100000
#define pb push_back


int n,arr[MAX];

int main(){
    int i, j, tc, tmp, cnt, ind, ans;
    while (scanf ("%d", &n) == 1){
        for (i = 0; i < n; i++) scanf ("%d", &arr[i]);

        tmp = cnt = ind = 0;
        sort (arr, arr+n);
        if (n % 2 == 0)
            ind = (n/2) - 1;
        else
            ind = n / 2;
        //ind = n / 2;
        printf ("%d\n", arr[ind]);
    }
    return 0;
}
