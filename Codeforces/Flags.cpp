#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 105
#define row 102
#define col 101

int main(){
    int n, m, i, j, cross_cnt, ans, tmp, check, sum;
    //char flags[row][col];
    char flags[row], str;
    scanf ("%d%d", &n, &m);
    //for (i = 0; i < n; i++) scanf ("%s", flags);
    check = cross_cnt = 0 ;
    for (i = 0; i < n; i++){
        scanf ("%s", flags);
        if (flags[0] == str) {
            //puts ("NO");
            //return 0;
            check = 1;
        }
        str = flags[0];
        for (j = 0; j < m; j++)
            if (flags[j] != str){
                //puts ("NO");
                //return 0;
                check = 1;
            }
    }
    //puts ("YES");
//    for (i = 0; i < n; i++){
//        for (j = 0; j < m; j++){
//            if ((flags[i][j] == flags[i][j+1]) && (flags[i][j] != flags[i+1][j])){
////                    check = 1;
////                    break;
//                    //puts ("YES"); return 0;
//                    flags[i][j] = '.'; flags[i][j+1] = '.'; flags[i+1][j] = '.';
//            }
////            else{
////                check = 0; break;
////            }
//        }
//    }
//    for (i = 0; i < n; i++)
//        for (j = 0; j < m; j++)
//            if (flags[i][j] == '.') cross_cnt++;
    if (check) puts ("NO");
    else puts ("YES");
    return 0;
}
