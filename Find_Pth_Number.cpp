#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <algorithm>
#include <iostream>

using namespace std;

#define LLI long long int
#define ULL unsigned long long
#define MAX 100005


int main(){
    int tc, cs=1, i, j, arr[MAX], brr[MAX], cnt, tmp, n, p, ans;
    char str[10];
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d %s %d", &n, str, &p);
        for (i = 1; i <= n; i++){
            arr[i] = true;
            arr[i] = i;
        }
        ans = 0;
        cnt = 1;
        memset (brr, 0, sizeof (brr));
        if (str[0] == 'o'){
            for (i = 1; i <= n; i++){
                if (arr[i] % 2 == 0){
                    //arr[i] = false;
                    brr[cnt++] = arr[i];
                   // break;
                }
                //printf ("%d ", arr[i]);
            }
            //puts ("");
            //printf ("%d\n", arr[p]);
            ans = brr[p];
        }
        else{
            for (i = 1; i <= n; i++){
                if (arr[i] % 2 != 0){
                    //arr[i] = false;
                    brr[cnt++] = arr[i];
                    //break;
                }
            }
           // printf ("%d\n", arr[p]);
            ans = brr[p];
        }

        //sort ();
        printf ("%d\n", ans);
    }
    return 0;
}
