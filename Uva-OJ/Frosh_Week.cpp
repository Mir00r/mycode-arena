#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define row 205
#define col 205
#define MAX 1000006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 1000000007


int arr[MAX], n, ans;

int partition (int beg, int end){
    int i, pivot, par_ind, ans=0;

    pivot = arr[end];
    par_ind = beg;  // set partition index as start initially

    for (i = beg; i < end; i++){
        if (arr[i] <= pivot){
            ans++;
              printf ("Ans = %d\n", ans);
            swap (arr[i], arr[par_ind]);    // swap if element is leser then pivot
            par_ind++;
        }
    }

    swap (arr[par_ind], arr[end]);

    return par_ind;
}


void qk_sort (int beg, int end){
    int par_indx;

    if (beg < end){
        par_indx = partition (beg, end);
        qk_sort (beg, par_indx - 1);
        qk_sort (par_indx + 1, end);
    }

}


int main(){
    int i, j, cnt;
    while (scanf ("%d", &n) == 1){

        for (i = 0; i < n; i++)
            scanf ("%d", &arr[i]);

        qk_sort(0, n-1);
//        printf ("%d\n", ans);


//        for (i = 0; i < n; i++) printf ("%d ", arr[i]);
//        NL;
    }
    return 0;
}







/*
/*int partition (int beg, int end){
    int st_ind, pivot, i;
    int size = (end-beg) + 1;

    pivot = (rand() % size) + beg;
    swap (arr[pivot], arr[end]);
    st_ind = beg;

    for (i = beg; i < end; i++){
        if (arr[i] < arr[end]){
            swap (arr[st_ind], arr[i]);
            st_ind++;

        }
    }

    swap (arr[end], arr[st_ind]);
    return st_ind;
}

void qk_srt(int beg, int end){
    int pivot;
    //ans = 0;

    if (beg >= end)
        return;

    pivot = partition(beg, end);
    //ans = pivot;
   // printf ("Pvot = %d\n", pivot);


    qk_srt(beg, pivot-1);
    qk_srt(pivot+1, end);

    printf ("%d\n", pivot);
}






int arr[MAX], n;

int main (){
    int i, j, cnt, ans, tmp;

    while (scanf ("%d", &n) == 1){
        cnt = 0;
        for (i = 1; i <= n; i++)
            scanf ("%d", &arr[i]);

        for (i = 1; i <= n; i++){
            if (arr[i] != i){
                for (j = i+1; j <= n; j++){
                    if (arr[j] == i){
                        tmp = arr[j];
                        arr[j] = arr[i];
                        arr[i] = tmp;
                        cnt++;
                    }
                }
            }
        }

        printf ("%d\n", cnt);
    }
    return 0;
}
*/
