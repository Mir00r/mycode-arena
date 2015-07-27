#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define l long int
#define ll long long int
#define MAX 99

/*int compute(int n){    // Sum of the largest odd divisors of the first n numbers
    if(n==0) return 0;
    l k = (n+1)/2;
    printf ("K = %ld\n", k);
    l tmp = k*k + compute(n/2);
    printf ("tmp = %ld\n", tmp);
    return tmp;
}

int main(){
    int n;
    while (scanf ("%d", &n) && n != 0){
        //printf ("1/2\n");
        if (n < 3) printf ("1\n");
        else printf ("%d\n", compute(n));
    }
    return 0;
}*/

char land[25][25];
int w, h;
int X_arr[] = {-1, 1, 0, 0};
int Y_arr[] = {0, 0, -1, 1};
int cell_cnt;

void find_cell(int x, int y){
    //land[x][y] = '#';
    //cell_cnt = 0;
    int i, x_axis, y_axis;
    if(x < 0 || x >= h || y < 0 || y >= w) return;
    if (land[x][y] == '.' || land[x][y] == '@'){
        cell_cnt++;
        land[x][y] = '#';
        for(i = 0; i < 4; i++){
            x_axis = X_arr[i] + x;
            y_axis = Y_arr[i] + y;
            //if(x_axis >= 0 && x_axis < h && y_axis >= 0 && y_axis < w)
                  find_cell(x_axis, y_axis);
       }
    }
}

int main(){
    int t, c = 0, i, j;
    scanf ("%d", &t);
    while(t--){
        scanf("%d %d", &w, &h);
        cell_cnt = 0;
        for(i = 0; i < h; i++) scanf("%s", land[i]);
        for(i = 0; i < h; i++)
           for(j = 0; j < w; j++)
            if(land[i][j] == '@'){
                //cell_cnt++;
                find_cell(i, j);
            }
        printf("Case %d: %d\n",++c, cell_cnt);
    }
    return 0;
}
