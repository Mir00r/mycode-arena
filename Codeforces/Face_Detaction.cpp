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
#define LLI long long
#define LL __int64
#define ULL unsigned long long
#define row 55
#define col 55
#define MAX 100000+6
#define jora pair <LLI, LLI>
#define ff first
#define ss second
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 7477777

int n, m;
char grid[row][col];

int X_arr[] = {-1, 1, 0, 0};
int Y_arr[] = {0, 0, -1, 1};


bool check_cor (int rw, int cl){
    if (rw >= 0 && rw < n && cl >= 0 && cl < m)
        return true;

    return false;
}



int face_detac (){
    int i, j, k, res=0, ax, ay;
    string face ;

    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){

            face = "";

            face += grid[i][j];
            face += grid[i + 1][j];
            face += grid[i][j + 1];
            face += grid[i + 1][j + 1];

            sort (face.begin(), face.end());

                if (face == "acef")
                    res++;


//            for (k = 0; k < 4; k++){
//
//                ax = i + X_arr[k];
//                ay = j + Y_arr[k];
//
//               // printf ("%d     %d\n", ax, ay);
//
//                if ( check_cor (ax, ay) ){
//                    face = "";
//
//                    //printf ("%d     %d\n", ax, ay);
//
//                    face += grid[ax][ay];
//
//                   // cout << face << endl;
//
//                    sort (face.begin(), face.end());
//
//                    if (face == "acef")
//                        res++;
//
//                }
//
//            }

        }
    }

    return res;

}


int main (){
    int i, j, ans, cnt = 0, res=0;
    int a, b, sum=0;


    scanf ("%d %d", &n, &m);

    for (i = 0; i < n; i++)
        scanf ("%s", grid[i]);

    ans = face_detac ();

    printf ("%d\n", ans);
    return 0;
}



/*

int bfs (int x, int y){
    int cnt, ax, ay, i, u, v, res;

    queue <jora> Q;
    Q.push (jora (x, y));

    //mark[x][y] = true;

    while (Q.empty () == false){
        jora top = Q.front ();

        x = top.first;
        y = top.second;
        Q.pop ();

        cnt = res = 0;


        for (i = 0; i < 4; i++){
            ax = x + X_arr[i];
            ay = y + Y_arr[i];

            if ( check_cor (ax, ay) ){
                if ( grid[ax][ay] == 'f' ||  grid[ax][ay] == 'a' || grid[ax][ay] == 'c' || grid[ax][ay] == 'e' ){
                    cnt++;
                    Q.push (jora (ax, ay));
                }

            }

            if (cnt == 4){
                res++;
                cnt = 0;
            }

        }
    }
    return res;
}



//
//    for (i = 0; i < n; i++){
//        for (j = 0; j < m; j++){
//            if ( grid[i][j] == 'f' ||  grid[i][j] == 'a' || grid[i][j] == 'c' || grid[i][j] == 'e' ){
//                    //cnt++;
//                   // printf ("%d     %d\n", i, j);
//                sum += (i + j);
//            }
//
////            if ( sum % 4 == 0)
////                res++;
//        }
//
//        if (sum % 4 == 0){
//            res++;
//            sum = 0;
//        }
//
//    }
//    printf ("Sum = %d\n", sum);

//    printf ("%d\n", sum / 4);

    ans = bfs (0, 0);
    printf ("%d\n", ans);

*/
