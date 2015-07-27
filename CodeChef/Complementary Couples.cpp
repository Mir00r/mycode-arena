#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <stack>
#include <map>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI long long int
#define pb push_back
#define MAX 100005
#define bit_size 40

LLI arr[MAX], bit[bit_size];


int main(){
    LLI n, i, j, x, sum, k, ind;
    bool check;


    while (scanf ("%lld %lld", &n, &k) == 2){
        for (i = 0; i < n; i++)
            scanf ("%lld", &arr[i]);

        check = false;
        for (i = 0; i < n-1; i++){
            for (j = i+1; j < n; j++){
                if (arr[i] + arr[j] == k){
                    check = true;
                    //i = n;
                    break;
                }
            }
        }

        if (check) puts ("YES");
        else puts ("NO");
    }

    return 0;
}



        /*memset (bit, 0, sizeof (bit));
        sum = 0;
        check = false;

        for (i = 1; i <= n; i++){
            ind = 0;
            while (arr > 0){
                bit[ind]++;
                ind++;
                arr /= 2;
            }
        }

        for (i = 0; i <= 31; i++)
            if (bit[i] > 1){
                sum += (bit[i] * (bit[i] - 1) *pow (2, i) / 2 );
                if (sum == k){
                    check = true;
                    break;
                }
            }*/
