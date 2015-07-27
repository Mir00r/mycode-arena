#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define unsigned int
#define MAX 1000001

   /* vector <int> array[MAX];
int main(){
    int n, m, k, v, i, j, x, tmp;
    while(scanf ("%d%d", &n, &m) == 2){
        for (i = 0; i < MAX; i++) array[i].clear();
        for (i = 0; i < n; i++){
            scanf ("%d", &tmp);
            array[tmp].push_back(i+1);
        }   //scanf ("%d", &a[i]);
        for (j = 0; j < m; j++){
            scanf("%d%d", &k, &v);
            //x = array[v].size();
            //printf ("V = %d\n\n", x);
            if (array[v].size() < k) printf("0\n");
            else printf ("%d\n", array[v][k-1]);
        }
    }
    return 0;
}*/

vector <int> arr[MAX];
int main(){
    int x, y, z, num, occ;
    while(scanf("%d %d", &x, &y) == 2){
        for (int i = 0; i < MAX; i++) arr[i].clear ();
        for(int i = 0; i < x; i++){
            scanf("%d", &z);
            arr[z].push_back(i+1);
        }
        for(int i = 0; i < y; i++){
            scanf ("%d %d", &occ, &num);
             if (arr[num].size() < occ ) printf("0\n");
            else printf("%d\n",arr[num] [occ - 1]);
        }
    }
    return 0;
}
