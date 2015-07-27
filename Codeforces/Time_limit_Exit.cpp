#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <set>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define LLU long long unsigned
#define row 11
#define col 11
#define MAX 10006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 7477777




int main(){

    int i, j, k, h, tc, kase = 0;

    scanf ("%d", &tc);

    while(tc--){
        int n, tot, ele, sum;
        vector <int> v, dif;
        deque <int> dd;

        scanf ("%d", &n);

        for( i = 0 ; i < n; i++ ){
            scanf ("%d", &k);
            v.push_back(k);
        }

        sort( v.begin(), v.end() );

        for( i = 1 ; i < n; i++  ){
            k = v[i] - v[i-1];
            dif.push_back(k);
        }


        tot = ele = sum = 0;
        int len = dif.size();

        for( i = 0 ; i < len; i++ ){
            ele++;
            dd.push_back(dif[i]);
            sum += dif[i];

            if(sum < 32){
                tot += ele;
            }
            else{
                while(sum >= 32){
                    k = dd.front();
                    dd.pop_front();
                    sum -= k;
                    ele--;
                }

                tot += ele;

            }

        }

        printf ("%d\n", tot);

    }
    return 0;
}

