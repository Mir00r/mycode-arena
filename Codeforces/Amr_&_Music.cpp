#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <map>
#include <iomanip>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 100005

int arr[MAX], brr[MAX], n, k;
pair <int, int> jora[MAX];

int main (){

//    #ifdef Mir00r
//
//        freopen("input.txt","r",stdin);
//        freopen("output.txt","w",stdout);
//
//    #endif

    int i, j, cnt, sum, tmp, ans, check, diff;
    scanf ("%d %d", &n, &k);
    for (i = 0; i < n; i++){
        //scanf ("%d", &arr[i]);
        scanf ("%d", &jora[i].first);
        jora[i].second = i;
    }
//    puts ("Before Sorting");
//    for (i = 0; i < n; i++)
//        printf ("1st = %d   2nd = %d\n", jora[i].first, jora[i].second);

    sum = tmp = cnt = diff = 0;
    sort (jora, jora+n);

//    for (i = 0; i < n; i++)
//        printf ("\n1st = %d   2nd = %d\n", jora[i].first, jora[i].second);

    for (i = 0; i < n; i++){
//        sum += arr[i];
//        //diff = k - arr[i];
//        if (sum <= k){
//            //sum += arr[i];
//            brr[tmp++] = arr[i];
//        }
        //else brr[tmp++] = 0;
       // printf ("1st = %d   2nd = %d\n", jora[i].first, jora[i].second);
        if (k < jora[i].first) break;

        arr[cnt++] = jora[i].second + 1;
        k -= jora[i].first;

    }
    //printf ("Sum = %d\n", sum);
    sort (arr, arr+cnt);
    printf ("%d\n", cnt);
    for (i = 0; i < cnt; i++) printf ("%d ", arr[i]);
    puts ("");
    return 0;
}
