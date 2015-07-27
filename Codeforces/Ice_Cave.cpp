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
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define LLU long long unsigned
#define row 505
#define col 505
#define MAX 1006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 7477777


char grid[row][col];

int n, m, s1, s2, d1, d2;

int X_arr[] = {-1, 1, 0, 0};
int Y_arr[] = {0, 0, -1, 1};
bool mark[row][col];


bool check_corner (int rw, int cl){
    if (rw < 0 || rw == n || cl < 0 || cl == m)
        return false;

    return true;
}



bool bfs (int x, int y){
    int ax, ay, i, u, v;

    queue <jora> Q;
    Q.push (jora (x, y));
    mark[x][y] = true;

    while (Q.empty () == false){
        jora top = Q.front ();

        x = top.first;
        y = top.second;
        Q.pop ();

        for (i = 0; i < 4; i++){
            ax = x + X_arr[i];
            ay = y + Y_arr[i];

            if (check_corner (ax, ay) && grid[ax][ay]  == '.' && mark[ax][ay] == false){
                mark[ax][ay] = true;
                Q.push (jora (ax, ay));

//                if (grid[d1][d2] == true)
//                    return true;
            }

            else if (check_corner (ax, ay) && ax == d1 && ay == d2 && grid[ax][ay] == '.' && mark[ax][ay] == true){
                return true;
                break;
            }

            else if (check_corner (ax, ay) && ax == d1 && ay == d2 && grid[ax][ay] == 'X' ){
                return true;
                break;
            }
        }
    }

    return false;
}


int main(){
    int i, j, ans, tmp, cnt;

    scanf ("%d %d", &n, &m);

    for (i = 0; i < n; i++)
        scanf ("%s", grid[i]);

    memo (mark, false);

    scanf ("%d %d %d %d", &s1, &s2, &d1, &d2);
    s1--;
    s2--;
    d1--;
    d2--;


    if (bfs (s1, s2))
        puts ("YES");
    else
        puts ("NO");

    return 0;
}
