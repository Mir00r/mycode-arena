#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define pb push_back
#define MAX 1000005

LLI arr[MAX], brr[MAX], n;

vector <LLI> vt;


void swap_korlam (){
    LLI i, j;
    for (i = 0; i < n; i++){
        if (brr[i] != arr[i]){
            for (j = i+1; j <= n; j++){
                if (brr[i] == arr[j]) break;
                //swap (arr[i], arr[j]);
//                vt.pb(i);
//                vt.pb(j);
//                swap (arr[i], arr[j]);
            }
            vt.pb(i);
            vt.pb(j);
            swap (arr[i], arr[j]);
        }
    }
}


void result_pailam (){
    LLI check = 0, len, i, j;

    len = vt.size() / 2;
//    printf ("len = %I64d\n", len);
    printf ("%I64d\n", len);

    for (i = 0; i < vt.size(); i++){
        check++;
        if (check == 1) printf ("%I64d ", vt[i]);
        else if (check == 2){
            printf ("%I64d\n", vt[i]);
            check = 0;
        }
    }
}


int main(){
    LLI i, j, ans;
    scanf ("%I64d", &n);
    for (i = 0; i < n; i++){
        scanf ("%I64d", &arr[i]);
        brr[i] = arr[i];
    }

    sort (brr, brr+n);

    swap_korlam();
    result_pailam();

    vt.clear ();
    return 0;
}


/*
void selectSort(LLI arr[], LLI n){
	LLI pos_min, tmp, i, j, cnt = 0, a=0, b=0, c=0;
    //LLI x[10], y[10];
	for (i = 0; i < n; i++){
	    pos_min = i;
	    a = i;
		for (j = i+1; j < n; j++){
            if (arr[j] < arr[pos_min])
            pos_min = j;
		}

        //printf ("A = %I64d    pos = %I64d\n", a, pos_min);
       // a = b = 0;
        if (pos_min != i){
//            tmp = arr[i];
//            arr[i] = arr[pos_min];
//            arr[pos_min] = tmp;
            //cnt++;
            swap (arr[i], arr[j]);
        }
        printf ("%I64d %I64d\n", a, pos_min);
	}
   // printf ("%I64d\n", cnt);
   // for (i = 0; i < cnt; i++) printf ("%I64d %I64d\n", a, b);
	//return cnt;
}

int main(){
    LLI i, j, ans;
    scanf ("%I64d", &n);
    for (i = 0; i < n; i++){
        scanf ("%I64d", &arr[i]);
        brr[i] = arr[i];
    }
    printf ("%I64d", n);
    selectSort(arr, n);
    return 0;
}*/
