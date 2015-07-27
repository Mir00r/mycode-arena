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
#define row 110
#define col 110
#define MAX 3006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1LL << 60)
#define eps 1e9
//#define mod 7477777


LLI n, mat[row][col];
LLI ans = -inf;



bool corner_check (int rw, int cl){
    if (rw < 0 || rw == n || cl < 0 || cl == n)
        return false;
    return true;
}


void check_line (int x, int y){
    LLI sum = 0, cnt = 0;

    if (corner_check (x, y)){
        cnt++;
        sum += mat[x][y];

        if (corner_check (x, y + 1)){
            cnt++;
            sum += mat[x][y + 1];
        }

        if (corner_check (x, y + 2)){
            cnt++;
            sum += mat[x][y + 2];
        }

        if (corner_check (x, y + 3)){
            cnt++;
            sum += mat[x][y + 3];
        }

    }

    if (cnt == 4)
        ans = max (ans, sum);

    cnt = sum = 0;

    if (corner_check (x, y)){
        cnt++;
        sum += mat[x][y];

        if (corner_check (x + 1, y)){
            cnt++;
            sum += mat[x + 1][y];
        }

        if (corner_check (x + 2, y)){
            cnt++;
            sum += mat[x + 2][y];
        }

        if (corner_check (x + 3, y)){
            cnt++;
            sum += mat[x + 3][y];
        }

    }

    if (cnt == 4)
        ans = max (ans, sum);


}



void check_box (int x, int y){
    LLI cnt = 0, sum = 0;

    if (corner_check (x, y)){
        cnt++;
        sum += mat[x][y];

        if (corner_check (x, y + 1)){
            cnt++;
            sum += mat[x][y + 1];
        }

        if (corner_check (x + 1, y)){
            cnt++;
            sum += mat[x + 1][y];
        }
        if (corner_check (x + 1, y + 1)){
            cnt++;
            sum += mat[x + 1][y + 1];
        }
    }


    if (cnt == 4)
        ans = max (ans, sum);
}


void check_chair (int x, int y){
    LLI cnt = 0, sum  = 0;

    if (corner_check (x, y)){
        cnt++;
        sum += mat[x][y];

        if (corner_check (x, y + 1)){
            cnt++;
            sum += mat[x][y + 1];
        }

        if (corner_check (x +1, y + 1)){
            cnt++;
            sum += mat[x + 1][y + 1];
        }

        if (corner_check (x +1, y + 2)){
            cnt++;
            sum += mat[x + 1][y + 2];
        }
    }

    if (cnt == 4)
        ans = max (ans, sum);

    cnt = sum = 0;

    if (corner_check (x, y + 1)){
        cnt++;
        sum += mat[x][y + 1];

        if (corner_check (x +1, y + 1)){
            cnt++;
            sum += mat[x + 1][y + 1];
        }

        if (corner_check (x +1, y)){
            cnt++;
            sum += mat[x + 1][y];
        }

        if (corner_check (x + 2, y)){
            cnt++;
            sum += mat[x + 2][y];
        }
    }

    if (cnt == 4)
        ans = max (ans, sum);
}


void check_Lshap (int x, int y){
    LLI sum = 0, cnt = 0;

    if (corner_check (x, y)){
        cnt++;
        sum += mat[x][y];

        if (corner_check (x, y + 1)){
            cnt++;
            sum += mat[x][y + 1];
        }

        if (corner_check (x +1, y)){
            cnt++;
            sum += mat[x + 1][y];
        }

        if (corner_check (x + 2, y)){
            cnt++;
            sum += mat[x + 2][y];
        }
    }

    if (cnt == 4)
        ans = max (ans, sum);

    sum = cnt = 0;

    if (corner_check (x, y)){
        cnt++;
        sum += mat[x][y];

        if (corner_check (x + 1, y)){
            cnt++;
            sum += mat[x + 1][y];
        }

        if (corner_check (x +1, y + 1)){
            cnt++;
            sum += mat[x + 1][y + 1];
        }

        if (corner_check (x +1, y + 2)){
            cnt++;
            sum += mat[x + 1][y + 2];
        }
    }

    if (cnt == 4)
        ans = max (ans, sum);

    sum = cnt = 0;

    if (corner_check (x, y)){
        cnt++;
        sum += mat[x][y];

        if (corner_check (x, y + 1)){
            cnt++;
            sum += mat[x][y + 1];
        }

        if (corner_check (x, y + 2)){
            cnt++;
            sum += mat[x][y + 2];
        }

        if (corner_check (x + 1, y + 2)){
            cnt++;
            sum += mat[x + 1][y + 2];
        }
    }

    if (cnt == 4)
        ans = max (ans, sum);

    sum = cnt = 0;

    if (corner_check (x, y + 1)){
        cnt++;
        sum += mat[x][y + 1];

        if (corner_check (x + 1, y + 1)){
            cnt++;
            sum += mat[x + 1][y + 1];
        }

        if (corner_check (x + 2, y + 1)){
            cnt++;
            sum += mat[x + 2][y + 1];
        }

        if (corner_check (x + 2, y )){
            cnt++;
            sum += mat[x + 2][y ];
        }
    }

    if (cnt == 4)
        ans = max (ans, sum);
}


void check_pistol_shap (int x, int y){
    LLI sum = 0, cnt = 0;

    if (corner_check (x, y + 1)){
        cnt++;
        sum += mat[x][y + 1];

        if (corner_check (x +1, y + 1)){
            cnt++;
            sum += mat[x + 1][y + 1];
        }

        if (corner_check (x +1, y + 2)){
            cnt++;
            sum += mat[x + 1][y + 2];
        }

        if (corner_check (x + 1, y)){
            cnt++;
            sum += mat[x + 1][y];
        }
    }

    if (cnt == 4)
        ans = max (ans, sum);

    sum = cnt = 0;

    if (corner_check (x + 1, y + 1)){
        cnt++;
        sum += mat[x + 1][y + 1];

        if (corner_check (x + 1, y)){
            cnt++;
            sum += mat[x + 1][y ];
        }

        if (corner_check (x , y )){
            cnt++;
            sum += mat[x ][y ];
        }

        if (corner_check (x + 2, y )){
            cnt++;
            sum += mat[x + 2][y ];
        }

    }

    if (cnt == 4)
        ans = max (ans, sum);

    sum = cnt = 0;

    if (corner_check (x, y)){
        cnt++;
        sum += mat[x][y];

        if (corner_check (x, y + 1)){
            cnt++;
            sum += mat[x][y + 1];
        }

        if (corner_check (x +1, y + 1)){
            cnt++;
            sum += mat[x + 1][y + 1];
        }

        if (corner_check (x , y + 2)){
            cnt++;
            sum += mat[x ][y + 2];
        }
    }

    if (cnt == 4)
        ans = max (ans, sum);

    sum = cnt = 0;

    if (corner_check (x + 1, y)){
        cnt++;
        sum += mat[x + 1][y];

        if (corner_check (x + 1, y + 1)){
            cnt++;
            sum += mat[x + 1][y + 1];
        }

        if (corner_check (x , y + 1)){
            cnt++;
            sum += mat[x ][y + 1];
        }

        if (corner_check (x + 2, y + 1)){
            cnt++;
            sum += mat[x + 2][y + 1];
        }
    }

    if (cnt == 4)
        ans = max (ans, sum);

}


int main(){
    int i, j, cs=1;

    while (scanf ("%lld", &n) == 1){
        if (n == 0)
            break;
        ans = -inf;

        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                scanf ("%lld", &mat[i][j]);

        for (i = 0; i < n; i++){
            for (j = 0; j < n; j++){

                check_line (i, j);
                check_box (i, j);
                check_chair (i, j);
                check_Lshap (i, j);
                check_pistol_shap (i, j);
            }
        }

        printf ("%d. %lld\n", cs++, ans);
    }

    return 0;
}





/*
LLI n, mat[row][col];
LLI ans = -inf;



//bool corner_check (int rw, int cl){
//    if (rw < 0 || rw == n || cl < 0 || cl == n)
//        return false;
//    return true;
//}

bool corner_check (int rw, int cl){
    if (rw < 1 || rw > n || cl < 1 || cl > n)
        return false;
    return true;
}



void check_line (int x, int y){
    LLI sum = 0, cnt = 0;

    if (corner_check (x, y)){
        cnt++;
        sum += mat[x][y];

        if (corner_check (x, y + 1)){
            cnt++;
            sum += mat[x][y + 1];
        }

        if (corner_check (x, y + 2)){
            cnt++;
            sum += mat[x][y + 2];
        }

        if (corner_check (x, y + 3)){
            cnt++;
            sum += mat[x][y + 3];
        }

    }

    if (cnt == 4)
        ans = max (ans, sum);

    cnt = 0, sum = 0;

    if (corner_check (x, y)){
        cnt++;
        sum += mat[x][y];

        if (corner_check (x + 1, y)){
            cnt++;
            sum += mat[x + 1][y];
        }

        if (corner_check (x + 2, y)){
            cnt++;
            sum += mat[x + 2][y];
        }

        if (corner_check (x + 3, y)){
            cnt++;
            sum += mat[x + 3][y];
        }

    }

    if (cnt == 4)
        ans = max (ans, sum);
}



void check_box (int x, int y){
    LLI cnt = 0, sum = 0;

    if (corner_check (x, y)){
        cnt++;
        sum += mat[x][y];

        if (corner_check (x, y + 1)){
            cnt++;
            sum += mat[x][y + 1];
        }

        if (corner_check (x + 1, y)){
            cnt++;
            sum += mat[x + 1][y];
        }
        if (corner_check (x + 1, y + 1)){
            cnt++;
            sum += mat[x + 1][y + 1];
        }
    }


    if (cnt == 4)
        ans = max (ans, sum);
}


void check_chair (int x, int y){
    LLI cnt = 0, sum  = 0;

    if (corner_check (x, y)){
        cnt++;
        sum += mat[x][y];

        if (corner_check (x, y + 1)){
            cnt++;
            sum += mat[x][y + 1];
        }

        if (corner_check (x + 1, y + 1)){
            cnt++;
            sum += mat[x + 1][y + 1];
        }

        if (corner_check (x + 1, y + 2)){
            cnt++;
            sum += mat[x + 1][y + 2];
        }
    }

    if (cnt == 4)
        ans = max (ans, sum);

    cnt = 0, sum = 0;

    if (corner_check (x, y )){
        cnt++;
        sum += mat[x][y ];

        if (corner_check (x - 1, y )){
            cnt++;
            sum += mat[x - 1][y ];
        }

        if (corner_check (x - 1, y + 1)){
            cnt++;
            sum += mat[x - 1][y + 1];
        }

        if (corner_check (x - 2, y + 1)){
            cnt++;
            sum += mat[x - 2][y + 1];
        }
    }

    if (cnt == 4)
        ans = max (ans, sum);
}


void check_Lshap (int x, int y){
    LLI sum = 0, cnt = 0;

    if (corner_check (x, y)){
        cnt++;
        sum += mat[x][y];

        if (corner_check (x, y + 1)){
            cnt++;
            sum += mat[x][y + 1];
        }

        if (corner_check (x , y + 2)){
            cnt++;
            sum += mat[x ][y + 2];
        }

        if (corner_check (x + 1, y + 2)){
            cnt++;
            sum += mat[x + 1][y + 2];
        }
    }

    if (cnt == 4)
        ans = max (ans, sum);

    sum = 0, cnt = 0;

    if (corner_check (x, y)){
        cnt++;
        sum += mat[x][y];

        if (corner_check (x + 1, y)){
            cnt++;
            sum += mat[x + 1][y];
        }

        if (corner_check (x + 2, y )){
            cnt++;
            sum += mat[x + 2][y ];
        }

        if (corner_check (x + 2, y - 1)){
            cnt++;
            sum += mat[x + 2][y - 1];
        }
    }

    if (cnt == 4)
        ans = max (ans, sum);

    sum = 0, cnt = 0;

    if (corner_check (x, y)){
        cnt++;
        sum += mat[x][y];

        if (corner_check (x, y - 1)){
            cnt++;
            sum += mat[x][y - 1];
        }

        if (corner_check (x, y - 2)){
            cnt++;
            sum += mat[x][y - 2];
        }

        if (corner_check (x - 1, y - 2)){
            cnt++;
            sum += mat[x - 1][y - 2];
        }
    }

    if (cnt == 4)
        ans = max (ans, sum);

    sum = 0, cnt = 0;

    if (corner_check (x, y )){
        cnt++;
        sum += mat[x][y ];

        if (corner_check (x - 1, y )){
            cnt++;
            sum += mat[x - 1][y ];
        }

        if (corner_check (x - 2, y )){
            cnt++;
            sum += mat[x - 2][y ];
        }

        if (corner_check (x - 2, y + 1)){
            cnt++;
            sum += mat[x - 2][y + 1];
        }
    }

    if (cnt == 4)
        ans = max (ans, sum);
}


void check_pistol_shap (int x, int y){
    LLI sum = 0, cnt = 0;

    if (corner_check (x, y)){
        cnt++;
        sum += mat[x][y];

        if (corner_check (x , y + 1)){
            cnt++;
            sum += mat[x ][y + 1];
        }

        if (corner_check (x , y + 2)){
            cnt++;
            sum += mat[x ][y + 2];
        }

        if (corner_check (x + 1, y + 1)){
            cnt++;
            sum += mat[x + 1][y + 1];
        }
    }

    if (cnt == 4)
        ans = max (ans, sum);

    sum = 0, cnt = 0;

    if (corner_check (x , y )){
        cnt++;
        sum += mat[x ][y ];

        if (corner_check (x - 1, y)){
            cnt++;
            sum += mat[x - 1][y ];
        }

        if (corner_check (x - 2, y )){
            cnt++;
            sum += mat[x - 2][y ];
        }

        if (corner_check (x - 1, y + 1)){
            cnt++;
            sum += mat[x - 1][y + 1];
        }

    }

    if (cnt == 4)
        ans = max (ans, sum);

    sum = 0, cnt = 0;

    if (corner_check (x, y)){
        cnt++;
        sum += mat[x][y];

        if (corner_check (x, y - 1)){
            cnt++;
            sum += mat[x][y - 1];
        }

        if (corner_check (x , y - 2)){
            cnt++;
            sum += mat[x ][y - 2];
        }

        if (corner_check (x - 1 , y - 1)){
            cnt++;
            sum += mat[x - 1][y - 1];
        }
    }

    if (cnt == 4)
        ans = max (ans, sum);

    sum = 0, cnt = 0;

    if (corner_check (x , y)){
        cnt++;
        sum += mat[x ][y];

        if (corner_check (x + 1, y )){
            cnt++;
            sum += mat[x + 1][y ];
        }

        if (corner_check (x + 2, y )){
            cnt++;
            sum += mat[x + 2][y ];
        }

        if (corner_check (x + 1, y - 1)){
            cnt++;
            sum += mat[x + 1][y - 1];
        }
    }

    if (cnt == 4)
        ans = max (ans, sum);

}


int main(){
    int i, j, cs=1;

    while (scanf ("%lld", &n) == 1){
        if (n == 0)
            break;

        for (i = 1; i <= n; i++)
            for (j = 1; j <= n; j++)
                scanf ("%lld", &mat[i][j]);

        for (i = 1; i <= n; i++){
            for (j = 1; j <= n; j++){

                check_line (i, j);
                check_box (i, j);
                check_chair (i, j);
                check_Lshap (i, j);
                check_pistol_shap (i, j);
            }
        }

        printf ("%d. %lld\n", cs++, ans);
    }
    return 0;
}*/

