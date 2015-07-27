
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

#define LLI __int64
#define ULL unsigned long long int
#define MAX 1005
#define row 100
#define col 100
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)


int facto (int x){
    int tot=1, i;
    for (i = 1; i <= x; i++)
        tot *= i;

    return tot;
}

int cal_func (int x){
    int tot=0, i, tmp = 0, f= 1, sum=0;

    for (i = 1; i <= x; i++){
        //tmp = arr[i];
        //f = facto(arr[i]);
        tot += (f * (facto(f) + x));
        //printf ("Tot %d\n",tot);
       // sum += tot;
        f++;
    }
    return tot;
}


int main (){
    int n, m, prr[MAX];

    int ans, i, j, cnt, tmp, sum;
    while (scanf ("%d %d", &n, &m) == 2){

        for (i = 0; i < n; i++)
            scanf("%d", &prr[i]);

        tmp = sum = ans = 0;

        for (i = 0; i < n; i++){
            tmp = prr[i];
            ans += cal_func(tmp);
        }
        printf ("%d\n", ans % m);

    }
    return 0;
}
