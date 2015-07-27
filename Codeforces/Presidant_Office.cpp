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
#define row 105
#define col 105
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)

int X_arr[] = {-1, 1, 0, 0};
int Y_arr[] = {0, 0, -1, 1};

int n, m;
char grid[row][col], ch[2];

set <char> st;


bool istrue(int r, int c){
    if(r >= 0 && r < n && c >= 0 && c < m)
        return true;

    return false;
}


/*int khoj_the_search (int x, int y){
    int ax, bx, i, j, res;

    for (i = 0; i < 4; i++){
        ax = i + X_arr[i];
        bx = j + Y_arr[i];
        if (istrue(ax, bx) ){
            if ( (grid[ax][bx] >= 'A' && grid[ax][bx] <= 'Z')  && grid[ax][bx] != ch[0]){
                st.insert (grid[ax][bx]);
               // khoj_the_search(ax, bx);
            }
        }
    }
    res = st.size ();

    return res;
}*/


int main(){
    int i, j, k, ans;
    scanf ("%d %d %s", &n, &m, ch);
    for (i = 0; i < n; i++)
       // for (j = 0; j < m; j++)
            scanf ("%s", grid[i]);

    int ax, bx;
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            if (grid[i][j] == ch[0]){
              //  ans = khoj_the_search (i, j);

                for (k = 0; k < 4; k++){
                    ax = i + X_arr[k];
                    bx = j + Y_arr[k];
                    if (istrue(ax, bx) ){
                        if ( (grid[ax][bx] >= 'A' && grid[ax][bx] <= 'Z')  && grid[ax][bx] != ch[0])
                            st.insert (grid[ax][bx]);
                    }
                }
            }
        }
    }
    ans = st.size ();
    printf ("%d\n", ans);
    return 0;
}
