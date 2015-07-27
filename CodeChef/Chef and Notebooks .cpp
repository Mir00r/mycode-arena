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
#define MAX 1000005
#define row 55
#define col 55
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define eps 0.000000001



struct node{
    LLI price, page;
}arr[MAX];


bool cmp (node a, node b){
    return a.price < b.price;
}



int main(){
    LLI tc, x, y, n, k, i, j, ans, tmp, cnt, diff, sum, div, p, pr;
    bool check;
    scanf ("%lld", &tc);
    while (tc--){
        scanf ("%lld %lld %lld %lld", &x, &y, &k, &n);
        for (i = 0; i < n; i++)
            scanf ("%lld %lld", &arr[i].page, &arr[i].price);

        sum = cnt = tmp = p = pr = 0;
        check = false;
        diff = abs (x - y);

        sort (arr, arr+n, cmp);

//        for (j = 0; j < n; j++)
//            printf ("%d %d\n", arr[j].page, arr[j].price);

        for (i = 0; i < n; i++){
            if (arr[i].page >= diff && arr[i].price <= k){
              //  diff -= arr[i].page;
                //k -= arr[i].price;
                check = true;
                break;
            }
        }
        //printf ("%lld %lld\n", diff, k);

       // tmp = diff + p;


//        if (diff == 0 && k != 0){
//            puts ("LuckyChef");
//            puts ("oka");
//        }

//         if (diff == 0 && k >= 0){
//            puts ("LuckyChef");
//           // puts ("Pakka");
//        }
        if (check)
            puts ("LuckyChef");
        else{
            puts ("UnluckyChef");
           // puts ("Kacha");
        }
    }
    return 0;
}
