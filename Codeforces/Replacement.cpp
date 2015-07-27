#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define ULL unsigned long  long
#define MAX 1000005


LLI arr[MAX], n, brr[MAX];

int main(){
    LLI i, j, tmp, ans, check, cnt;
    scanf ("%I64d", &n);
    for (i = 0; i < n; i++) scanf ("%I64d", &arr[i]);

    tmp = 1;
    sort (arr, arr+n);
    for (i = 0; i < n; i++){
//        if (arr[i] == tmp){
//            tmp = arr[i];
//            puts ("ok");
//            //break;
//        }
       // if (arr[i] != tmp && arr[i] > tmp){
            //tmp = arr[i];
            //arr[i] = tmp;
          //  swap (tmp, arr[i]);
            //
            //puts ("Another OK");
        //}

        if (i == 0) brr[i] = 1;
        else
            brr[i] = arr[i-1];
    }
    if (arr[n-1] == 1) brr[n-1] = 2;
    //sort (arr, arr+n);
    for (i = 0; i < n; i++) printf ("%I64d ", brr[i]);
    puts ("");
    return 0;
}
