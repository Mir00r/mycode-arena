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
#define row 105
#define col 105
#define MAX 300006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
//#define mod 7477777



int main(){
    int tc, i, j, sum, n, ans, tmp, diff, arr[MAX];
    bool check;
    scanf ("%d", &tc);

    while (tc--){
        scanf ("%d", &n);

        sum = diff = ans = tmp = 0;
        check = false;


        for (i = 0; i < n; i++){
            scanf ("%d", &arr[i]);
            sum += arr[i];
        }

        for (i = 0; i < n; i++){
            diff = sum - 2;
        }

//        for (i = 0; i < n; i++){
//            if (arr[i] <= 1 ){
//                check = false;
//                break;
//            }
//            else{
//                if (arr[i] > 2){
//                    diff = arr[i] - 2;
//                    sum += (arr[i] - diff);
//                }
//                else
//                    sum += arr[i];
//            }
//        }
        printf ("%d\n", sum);
    }

    return 0;
}
