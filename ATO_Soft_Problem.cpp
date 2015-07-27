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
#define LLI long long
#define LL __int64
#define ULL unsigned long long
#define row 55
#define col 55
#define MAX 100 + 10
#define jora pair <LLI, LLI>
#define ff first
#define ss second
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 7477777

int ele; // Number of element
int list_number;  // Number of list.
int list_ele[MAX]; // Number of elements in each list.

vector <int> list_array[MAX]; // Array list.
vector <int> sum; // Sum of different cal_large_sum;

void cal_large_sum (int n, int tot){
    int i;

    // Base Case

    if(n == list_number){
        sum.pb (tot);   // store the summation result in sum vector
        return;
    }

    for(i = 0 ; i < list_array[n].size() ; i++ ){
        cal_large_sum (n + 1, tot + list_array[n][i]); // call the next element to calculate largest sum
    }
}


int main(){

    int i, j, k, test, kase = 0;

    scanf ("%d", &list_number); // input number of array element


    for( i = 0 ; i < list_number ; i++ )
        scanf ("%d", &list_ele[i]);     // input the list element in array


    // Final input matrix in 2D grid
    for( i = 0 ; i < list_number ; i++ ){
        for( j = 0 ; j < list_ele[i] ; j++ ){

            scanf ("%d", &ele);
            list_array[i].pb(ele);
        }
    }

    cal_large_sum (0, 0);  // call the largest summation function

    sort(sum.begin(), sum.end());


    // Total result loop
//    for( i = sum.size() - 1 ; i >= 0 ; i-- )
//        printf ("%d ", sum[i]);


        // Result printed loop
        for (j = 1; j <= list_number; j++)
            printf ("%d ", sum[ sum.size() - j ]);


    return 0;
}


