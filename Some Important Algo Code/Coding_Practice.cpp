#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <sstream>
#include <list>
#include <iostream>
#include <algorithm>

using namespace std;

#define L long int
#define LL long long int
#define MAX 999999
#define row 500
#define col 500
#define eps 1e-11

int tc, cs=1, i, j, cnt, tmp, a, b, ans;

/*int fun (int x, int y){
    if (x == 0) return y;
    else return fun(x-1, y+1);
}*/

/*void fun2(int arr[], int start_index, int end_index){
    if(start_index >= end_index) return;
    int min_index;
    int temp;

    min_index = minIndex(arr, start_index, end_index);

    temp = arr[start_index];
    arr[start_index] = arr[min_index];
    arr[min_index] = temp;

    fun2(arr, start_index + 1, end_index);
}*/


/* he function calculates and returns \lfloor\log _2 \left( n \right)\rfloor. For example,
if n is between 8 and 15 then fun1() returns 3. If n is between 16 to 31 then fun1() returns 4.
*/
/*int mag_fun (int n){
    if (n == 1) return 0;
    else return 1 + mag_fun(n/2);
}*/

void fun(int n){
    if (n > 1) fun (n-1);
    for (i = 0; i < n; i++) printf (" * ");
    printf ("\n");
}

int main(){
    while (scanf ("%d", &a) == 1){
        fun(a);
        //printf ("Case %d: %d\n", cs++, ans);
    }
    return 9;
}
