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
#define pb push_back
#define NL puts ("")

int gona[102], arr[MAX], n;

int main(){
    int i, j, tmp, cnt, val;
    bool check;
    while (scanf ("%d", &n) == 1){
        if (n == 0) break;
        memset (gona, 0, sizeof (gona));
        for (i = 1; i <= n; i++){
            scanf ("%d", &arr[i]);
            gona[arr[i]]++;
           // arr[val]++;
        }
        check = false;
        for (i = 1; i <= 100; i++){
            cnt = 0;
            for (j = 1; j <= gona[i] ; j++){
                if (check == false){
                    printf ("%d ", i);
                    check = true;
                }
                else
                    printf ("%d ", i);

//                if (i == arr[j]){
//                    if (cnt < n-1){
//                        printf ("%d ", arr[j]);
//                        cnt++;
//                    }
//                    else
//                        printf ("%d ", arr[j]);
//                }
            }
        }
        NL;
    }
    //NL;
    return 0;
}
