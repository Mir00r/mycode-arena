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
#define MAX 105
#define row 55
#define col 55
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define eps 0.000000001


int n, m, cnt;
char grid[row][col], color[2];
//string grid[col], color;


int X_arr[] = {1, 1, 1, 0, 0, -1, -1, -1};
int Y_arr[] = {1, 0, -1, 1, -1, 1, 0, -1};


bool istrue(int r, int c){
    if(r >= 0 && r < m && c >= 0 && c < n) return true;
    return false;
}

int main (){

//    #ifdef Mir00r
//
//        freopen("inp.txt", "r", stdin);
//        //freopen("out.txt", "w", stdout);
//
//    #endif

    int tc, cs=1, i, j, k, ans, tmp, maxn, ax, ay, clr,x, y;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d %d", &m, &n);
        scanf ("%s", color);
       // cin >> color;

        for (i = 0; i < m; i++)
            //for (j = 0; j < n; j++)
                scanf ("%s", grid[i]);
              //  cin >> grid[i][j];

        maxn = ans = clr = x = y = 0;

        for (i = 0; i < m; i++){
            for (j = 0; j < n; j++){

                if (grid[i][j] == color[0]){
                    x++;
                }
                else if (grid[i][j] != '.'){
                   // printf ("I = %d J = %d\n", i, j);
                    if (istrue(i, j))
                        for (k = i-1; k >= 0; k-- ){
                            if (istrue(k, j) && grid[k][j] == color[0]){
                                x++;
                                //printf ("K = %d     J = %d\n", k, j);
                                break;
                            }
                            else if (istrue(k, j) && grid[k][j] == '.')
                                break;
                        }
                }
            }
        }
        printf ("Case %d: %d\n", cs++, x);

    }
    return 0;
}




/*
5

4 4 R
....
GG..
BYR.
RRR.

5 4 R
....
GGW.
BYRW
RRRW
WWWW

4 3 Y
..Y
YGY
BYR
RRY

7 8 B
.YBBBY..
.Y...Y..
..Y.Y...
...BB..Y
..R.R...
.....Y..
.....Y..


7 25 Y
...........B..Y.R.R.B....
...........B...Y....B....
...........B..RY.G..B....
...........BGRRGGGG.B....
...........B..RBGRBGB....
...........BB.BBBB.B.....
.........................


*/










/*

bool color_true (int r, int c){
    if (grid[r+1][c] != color[0] && grid[r+1][c] != '.')
        return true;

    return false;
}


                    printf ("I = %d  j = %d\n", i, j);
                    for (k = i+1; k < m-i-1; k++){

                        if (istrue(k, j))
                            if ( (grid[k][j] != color[0] && grid[k][j] != '.')){
                                x++;
                                //printf ("K = %d  J = %d\n", k, j);
                            }
                    }





void find_color (int a, int b){
    int i, ax, ay, x, y;
    cnt = 0;

    queue <int> Q;
    Q.push (a);
    Q.push (b);

    while (!Q.empty ()){
        x = Q.front (); Q.pop();
        y = Q.front (); Q.pop();

        for (i = 0; i < 8; i++){
            ax = x + X_arr[i];
            ay = y + Y_arr[i];

            if ( (istrue(ax, ay) && grid[ax][ay] == color[0]) || (istrue(ax, ay) && grid[ax][ay] != color[0]  && grid[ax-1][ay] == color[0]) ){
                cnt++;
                Q.push (ax);
                Q.push (ay);
            }
        }

    }
}





void find_color (int a, int b){
    int i, ax, ay, x, y;
    cnt = 0;
    if (grid[a][b] == color[0]){
        cnt++;
        for (i = 0; i < 8; i++){
            ax = x + X_arr[i];
            ay = y + Y_arr[i];
            if (istrue(ax, ay))
                if (grid[ax][ay] == color[0] || color_true(ax, ay))
                    find_color (ax, ay);
        }
    }
}






for (k = 0; k < 8; k++){
    ax = i + X_arr[k];
    ay = j + Y_arr[k];

    if (istrue(ax, ay)){
        if (grid[ax][ay] == color[0] || color_true(ax, ay) )
            clr++;
    }
}



        for (i = 0; i < m; i++){
            for (j = 0; j < n; j++){
                if (grid[i][j] == color){
                  //  find_color (i, j);

                    for (i = 0; i < 8; i++){
                        ax = x + X_arr[i];
                        ay = y + Y_arr[i];

                        if ( (istrue(ax, ay) && grid[ax][ay] == color) || (istrue(ax, ay) && grid[ax][ay] != color  && grid[ax-1][ay] == color) ){
                            cnt++;

                        }
                    }

                }
            }
        }


*/
