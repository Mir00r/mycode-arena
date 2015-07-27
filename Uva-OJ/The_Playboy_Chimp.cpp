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
#define row 35
#define col 35
#define MAX 100000
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define eps 1e9
#define mod 1000000007


int n, q;
int arr[MAX], brr[MAX];



int main(){
    int i , j, k, cnt, tmp, ans, br;

    while (scanf ("%d", &n) == 1){
        for (i = 0; i < n; i++)
            scanf ("%d", &arr[i]);

        scanf ("%d", &q);
        bool check ;
        while (q--){
            scanf ("%d", &br);

            check = false;
            for (i = 0; i < n; i++){
                if (arr[i] >= br){

                    if (arr[i-1] > 0){
                       // puts ("Oka");
                        printf ("%d ", arr[i-1]);
                    }
                    else{
                       // puts ("Boka");
                        printf ("X ");
                    }

                    while (arr[i] == br){
                       // puts ("Working");
                        i++;
                    }

                    if (arr[i] > 0){
                       // puts ("Coca");
                        printf ("%d\n", arr[i]);
                    }
                    else{
                       // puts ("Cola");
                        printf ("X\n");
                    }

                   check = true;
                   break;


                }
            }

            if (!check)
                printf ("%d X\n", arr[n-1]);
        }
    }
    return 0;
}
