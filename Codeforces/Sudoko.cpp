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
#define row 15
#define col 15
#define MAX 10006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 7477777

#define FOR(i,a,b) for(int i=(a),_b=(b); i<=_b; i++)


//set <char> st;
char board[row][col];


/*int push_val (int x, int y){
    int i, j, len;

    for (i = 0; i < x; i++)
        for (j = 0; j < y; j++)
            st.insert (board[i][j]);
    len = st.size ();

    return len;

}
*/


bool row_ok (){
    int i, j;
    set <char> st;

    for (i = 0; i < 9; i++){
        //set <char> st;
        for (j = 0; j < 9; j++)
            st.insert (board[i][j]);

        if (st.size () != 9)
            return false;
        st.clear ();
    }

    return true;
   // st.clear ();
}


bool col_ok (){
    int i, j;
    set <char> su;

    for (i = 0; i < 9; i++){
    //    set <char> su;
        for (j = 0; j < 9; j++)
            su.insert (board[j][i]);

        if (su.size () != 9)
            return false;
        su.clear ();
    }

    return true;
    //su.clear ();
}

bool check_box(){
    int i, j, r, c;
    set <char> sv;

    for (i = 0; i < 9; i += 3)
        for (j = 0; j < 9; j += 3){

    //        set <char> sv;
            for (r = 0; r < 3; r++)
                for (c = 0; c < 3; c++)
                  sv.insert (board[i + r][j + c]);

            if (sv.size () != 9)
                return false;
            sv.clear ();
        }

    return true;
   // sv.clear ();
}




int main(){
    int tc, i, j, ans, res;

    scanf ("%d", &tc);

    while (tc--){
        for (i = 0; i < 9; i++)
            //for (j = 0; j < 9; j++)
               // scanf ("%d", &board[i][j]);
                scanf ("%s", board[i]);
              //  cin >> board[i][j];

        ans = res = 0;

//        for (i = 0; i < 10; i++){
//           // puts ("ok");
//            ans += push_val (i, 9);
//        }
//
//        for (i = 0; i < 9; i++){
//            res += push_val (0, i);
//        }

       // printf ("Ans = %d   Res = %d\n", ans, res);

        //if (ans == res)

         if (row_ok() && col_ok() && check_box())
            puts ("Valid");
        else
            puts ("Invalid");
        //st.clear ();
    }

    return 0;
}






/*
bool is_ok (){
    int i, j, k, m, n, o, p, q;

    for (i = 1; i <= 9; i++)
        for (j = 1; j <= 9; j++)
            for (k = j+1; k <= 9; k++)
                if (board[i][j] == board[i][k])
                    return false;

    for (i = 1; i <= 9; i++)
        for (j = 1; j <= 9; j++)
            for (k = j+1; k <= 9; k++)
                if (board[j][i] == board[k][i])
                    return false;

    for (i = 1; i <= 9; i += 3)
        for (j = 1; j <= 9; j += 3)

            for (k = i; k <= i+2; k++)
                for (m = j; m <= j+2; m++)

                    for (n = k; n <= i+2; n++)
                        for (o = j; o <= j+2; o++)

                            if (k != n || m != o)
                                if (board[k][m] == board[n][o] )
                                    return false;
    return true;

}


int main(){
    int tc, i, j;
    scanf ("%d", &tc);

    while (tc--){
        for (i = 1; i <= 9; i++)
            for (j = 1; j <= 9; j++)
                //scanf ("%s", &board[i][j]);
                cin >> board[i][j];

        if (is_ok())
            puts ("Valid");
        else
            puts ("Invalid");
    }
    return 0;
}

*/
