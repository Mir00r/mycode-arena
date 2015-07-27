#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <algorithm>
#include <iostream>

using namespace std;

#define LLI __int64
#define ULL unsigned long long
#define MAX 100005
#define row 1001
#define col 1001
#define pb push_back


int m, n, k, src, des;
//vector <int> grid[row];
//int arr[MAX], brr[MAX],
int map[row][col];

bool check_corner (int r, int c){
    if (map[r][c] == 1 && map[r+1][c] == 1 && map[r][c+1] && map[r+1][c+1] == 1) return true;
    return false;
}



int main (){
    int i, j, ans, cnt, tmp, sum, p, q;
    scanf ("%d %d %d", &n, &m, &k);
    for (i = 1; i <= k; i++){
        scanf ("%d %d", &src, &des);
        //grid[src].pb(des);
        //grid[des].pb(src);
//        arr[i] = src;
//        brr[i] = des;
        map[src][des] = 1;
        if ( (check_corner(src, des) || check_corner(src-1, des) || check_corner(src, des-1) || check_corner(src-1, des-1)) == true){
            printf ("%d\n", i);
            return 0;
        }
    }
    puts ("0");

//    cnt = tmp = sum = 0;
//    p = q = 1;
//    bool check = false;

//    for (i = 1; i <= n; i++){
//        for (j = 1; j <= m; j++){
//            //printf ("%d ", grid[i][j]);
//            sum += map[i][j];
//            if (sum % 4 == 0){
//                check = true;
//                break;
//            }
//        }
//    }

//    while (p <= n && q <= m){
//        for (j = 1; j <= 4; j++){
//            //if (arr[p] != brr[q]){
//                sum += map[p][q];
//                cnt++;
//            //}
//            //p++;
//            //q++;
//
//        }
//        p++;
//        q++;
//        if (sum % 4 == 0){
//            check = true;
//            break;
//        }
//        //p++;
//        //q++;
//    }
//
//    printf ("Sum = %d\n", sum);
//
//
//    if (check) printf ("%d\n", cnt);
//    else puts ("0");

    //grid.clear();

    return 0;
}
