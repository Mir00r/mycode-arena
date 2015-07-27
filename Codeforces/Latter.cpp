#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <queue>
#include <stack>
#include <vector>
#include <list>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define ULL unsigned long long int
#define MAX 1005
#define row 100
#define col 100
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)

int n, m, rx, ry, cx, cy;

char latter[row][col];


//bool istrue(int r, int c){
//    if(r >= 0 && r < n && c >= 0 && c < m)
//        return true;
//
//    return false;
//}



/*void row_srch_1 (){
    int  i , j;
    rx = 0;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= m; j++)
            if (latter[j][i] == '*'){
                rx = i;
                //printf ("Rx = %d\n", rx);
                break;
            }
    //return rx;
}

void row_srch_2 (){
    int  i , j;
    ry = 0;
    for (i = n; i >= 1; i--)
        for (j = 1; j <= m; j++)
            if (latter[j][i] == '*'){
                ry = i;
               // printf ("Ry = %d\n", ry);
                break;
            }
   // return ry;
}


void col_srch_1 (){
    int  i , j;
    cx = 0;
    for (i = 1; i <= m; i++)
        for (j = 1; j <= n; j++)
            if (latter[i][j] == '*'){
                cx = i;
               // printf ("Cx = %d\n", cx);
                break;
            }
    //return cx;
}

void col_srch_2 (){
    int  i , j;
    cy = 0;
    for (i = m; i >= 1; i--)
        for (j = 1; j <= n; j++)
            if (latter[i][j] == '*'){
                cy = i;
               // printf ("Cy = %d\n", cy);
                break;
            }
    //return cy;
}*/


int main(){
    int i, j, cnt, tmp;
    int rit, dwn, up, lft;
    scanf ("%d %d", &n, &m);

    for (i = 0; i < n; i++)
       // for (j = 1; j <= m; j++)
            scanf ("%s", latter[i]);


     rit = dwn = 0;
     lft = up = inf;

     for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            if (latter[i][j] == '*'){

              //  printf ("Row = %d   Col = %d\n", i, j);
                lft = min (lft, j);
                rit = max (rit, j);

                up = min (up, i);
                dwn = max (dwn, i);
               // printf ("Left = %d  Right = %d      Up = %d  Down = %d\n", lft, rit, up, dwn);
            }
        }

     }


    for (i = up; i <= dwn; i++ ){
        for (j = lft; j <= rit; j++)
            printf ("%c", latter[i][j]);

        NL;
    }


//    for (i = 0; i < n; i++ )
//        for (j = 0; j < m;; j++)
//            if (latter[i][j] == '.')
//                cal (i , j);

//        cnt = row_srch_1(n, m);
       // cnt = row_srch_2(n, m);

//    row_srch_1();
//    row_srch_2();
//    col_srch_1();
//    col_srch_2();
//
//    for (i = ry; i <= rx; i++ )
//        for (j = cy; j <= cx; j++)
//            printf ("%c", latter[i][j]);
    return 0;
}
