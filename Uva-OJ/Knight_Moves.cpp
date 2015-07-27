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
#define ULL unsigned long long
#define row 8
#define col 8
#define MAX 5
#define jora pair <int, int>
#define inf 2147482647
#define nill -13
#define memo(array, value) memset(array, value, sizeof(array))

//int X_arr[] = {-1, 1, 0, 0};
//int Y_arr[] = {0, 0, -1, 1};
//int X_arr[]={1,1,1,0,0,-1,-1,-1};
//int Y_arr[]={1,0,-1,1,-1,1,0,-1};

int kx_direc[] = {-2, -2, -1, -1, 1, 1, 2, 2};
int ky_direc[] = {-1, 1, -2, 2, -2, 2, -1, 1};

int visited[row][col], level[row][col];
//int map[row][col], parent[][row][col];

/*struct node{
    int r, c, level;
}start, end;
*/


/*bool corner_check(node s){
    if (s.r >= 1 && s.r < 8 && s.c >= 1 && s.c < 8) return true;
    return false;
}*/

bool corner_check(int r, int c){
    if (r >= 0 && r < 8 && c >= 0 && c < 8) return true;
    return false;
}


void bfs (int sx, int sy, int dx, int dy){
    int ax, ay, qx, qy, i;
    queue <int> Q;

    Q.push (sx);
    Q.push (sy);

    visited[sx][sy] = 1;
    level[sx][sy] = 0;

    while (Q.empty () == false){
        qx = Q.front ();
        Q.pop();

        qy = Q.front ();
        Q.pop ();

        for (i = 0; i < 8; i++){
           ax = qx + kx_direc[i];
           ay = qy + ky_direc[i];

           if (corner_check(ax, ay) == true && visited[ax][ay] == 0){

                visited[ax][ay] = 1;

                Q.push (ax);
                Q.push (ay);

                level[ax][ay] = level[qx][qy] + 1;

                if (ax == dx && ay == dy) return;
           }
        }
    }
    return;
}


int main (){
    char s_str[MAX], e_str[MAX];
    int sdx, sdy, ddx, ddy, ans;

    while (scanf ("%s%s", s_str, e_str) != EOF){
        sdx = s_str[0] - 'a';
        sdy = s_str[1] -  '1';

        ddx = e_str[0] - 'a';
        ddy = e_str[1] - '1';

        memo (visited, 0);
        memo (level, 0);


        bfs (sdx, sdy, ddx, ddy);

        printf ("To get from %s to %s takes %d knight moves.\n", s_str, e_str, level[ddx][ddy]);
    }
    return 0;
}


/*int main(){
    char s_str[MAX], e_str[MAX];
    while (scanf ("%s%s", s_str, e_str) == 2){
        memo (visited, 0);
        start.level = 0;
        start.r = s_str[1] - '0';
        start.c = s_str[0] - 'a' + 1;
        end.r = e_str[1] - '0';
        end.c = e_str[0] - 'a' + 1;
        int ans = bfs (start);
        printf ("To get from %c%c to %c%c takes %d knight moves.\n", s_str[0], s_str[1], e_str[0], e_str[1], ans);
    }
    return 0;
}



int bfs (node st){
    int i;
    node tmp, top;

    if (st.c == end.c && st.r == end.r) return 0;

    queue <node> Q;
    Q.push (st);

    tmp.level = 0;
    //visited[tmp.r][tmp.c] = 1;

    while (Q.empty () == false){
        top = Q.front ();
        Q.pop ();
        for (i = 0; i < 8; i++){
            tmp.r = top.r + kx_direc[i];
            tmp.c = top.c + ky_direc[i];
            tmp.level = top.level + 1;
            if (corner_check(tmp) == true && visited[tmp.r][tmp.c] == 0){
                    //puts ("I m in");
                    visited[tmp.r][tmp.c] = 1;
                    //tmp.level = top.level + 1;
                    Q.push (tmp);
            }
            if (tmp.r == end.r && tmp.c == end.c){
                //puts ("OK");
                return tmp.level;
            }
        }
    }
}
*/
