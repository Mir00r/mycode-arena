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
#define LL __int64
#define ULL unsigned long long
#define row 35
#define col 35
#define MAX 100000
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define eps 1e9
#define mod 1000000007


int m, n, q, x, y;
//char a[3], b[3];
//char drinks[row];
//int shelf[row][col];

string shelf[row][col], drink, a, b;


int main(){

//    #ifdef Mir00r
//        freopen ("input.txt", "r", stdin);
//        freopen ("output.txt", "w", stdout);
//    #endif

    int i , j, k, tmp, cnt, ans;

  //  memo (shelf, 0);

    int check ;

    scanf ("%d %d %d", &n, &m, &q);

    for (i = 1; i <= q; i++){
        //scanf ("%s", a);
        cin >> a;


        if (a[0] == '+'){
            scanf ("%d %d", &x, &y);
            cin >> drink;

            while (1){
                if (shelf[x][y] == ""){
                    shelf[x][y] = drink;
                    break;
                }
                else{
                    y++;

                    if (y > m){
                        x++;
                        y = 1;

                        if (x > n)
                            break;
                    }
                }
            }
        }

        else{
            cin >> drink;
            check = 0;

            for (j = 1; j <= n; j++){
                if (check == 1)
                    break;

                for (k = 1; k <= m; k++){
                    if (shelf[j][k] == drink){
                        check = 1;
                        break;
                    }
                }

            }

            if (check == 0)
                puts ("-1 -1");

            else{
                printf ("%d %d\n", j-1, k);
                shelf[j-1][k] = "";
            }
        }


    }

    return 0;
}
