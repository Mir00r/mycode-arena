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
#define row 32
#define col 32
#define MAX 3000006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
//#define mod 7477777

int mat[row][col], n;


bool add_check (){
    int i, j;

    for (i = 1; i <= n-1; i++){
        for (j = 1; j <= n-1; j++){

        //    printf ("A = %d     B = %d      C = %d      D = %d\n", mat[i][j], mat[i][j-1], mat[0][j], mat[0][j-1]);

//            if ( abs ( mat[i][j] - mat[i][j-1] ) ==  abs ( mat[0][j] - mat[0][j-1] ) )
            if (  mat[i][j] - mat[i][j-1]  !=   mat[0][j] - mat[0][j-1] )
//                return true;
                return false;
        }
    }

    return true;
}


int main(){
    int i, j, tc, cs=1, ans;

    scanf ("%d", &tc);

    while (tc--){
        scanf ("%d", &n);

        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                scanf ("%d", &mat[i][j]);

        if (add_check())
            printf ("%d. YES\n", cs++);
        else
            printf ("%d. NO\n", cs++);
    }

    return 0;
}
