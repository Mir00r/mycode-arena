#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 100
#define row 11
#define col 12

char mat[row][col], inc;
int X_arr[] = {-1, 1, 0, 0};
int Y_arr[] = {0, 0, -1, 1};
int main(){
    int t, n, i, j, k, m, X2, Y2, c=0;
    bool flag;
    scanf ("%d", &t);
    while(t--){
        scanf ("%d", &n);
        for (i = 0; i < n; i++)
            //for (j = 0; j < n; j++)
                scanf ("%s", mat[i]);
        for (i = 0; i < n; i++){
            for (j = 0; j < n; j++){
                if (mat[i][j] == '.'){
                    for (k = 'A'; k <= 'Z'; k++){
                        flag = true;
                        for (m = 0; m < 4; m++){
                            X2 = i + X_arr[m];
                            Y2 = j + Y_arr[m];
                            if (X2 >= 0 && X2 < n && Y2 >= 0 && Y2 < n && mat[X2][Y2] == k)
                                flag = false;
                        }
                        if (flag == true){
                            mat[i][j] = k;
                            break;
                        }
                    }
                }
            }
        }
        printf ("Case %d:\n", ++c);
        for (i = 0; i < n; i++)
            //for (j = 0; j < n; j++)
                printf ("%s\n", mat[i]);
    }
    return 0;
}
