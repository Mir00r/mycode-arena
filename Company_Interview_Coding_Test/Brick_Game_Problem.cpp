#include <bits/stdc++.h>

using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define LLU long long unsigned
#define row 10
#define col 10
#define MAX 10000
#define jora pair <int, int>
#define memo(arr, value) memset(arr, value, sizeof(arr))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define MOD 7477777
#define PI 3.1415926535897932384626433832795
#define PrimeRange 1000000
#define CharRange 255
#define LIMIT 1000

void Horizontal_Line_Process( int, int );

int arr[ row ][ col ], rw, cl;


bool Corner_Check ( int r, int c ) {
    if ( r < 0 || r >= rw || c < 0 || c >= cl ) return false;
    return true;
}


void Horizontal_Line_Process ( int r , int c1, int c2 ) {
    int k;
    for ( k = r; k < rw; k++ ) {
        if ( Corner_Check ( k + 1, c1 ) && Corner_Check ( k + 1, c2 ) ) {
            if ( arr[ k + 1 ][ c1 ] == 0 && arr[ k + 1 ][ c2 ] == 0 ) {
                arr[ k ][ c1 ] = 0;
                arr[ k ][ c2 ] = 0;

                arr[ k + 1 ][ c1 ] = 1;
                arr[ k + 1 ][ c2 ] = 1;
            }
            if ( ( arr[ k + 1 ][ c1 ] == 0 && arr[ k + 1 ][ c2 ] == 1 ) || ( arr[ k + 1 ][ c1 ] == 1 && arr[ k + 1 ][ c2 ] == 0 ) ) {
                break;
            }
        }
    }
}

void Vertical_Line_Process ( int r, int c ) {
    int k;
    for ( k = r; k < rw; k++ ) {
        if ( Corner_Check ( k + 1, c ) ) {
            if ( arr[ k + 1 ][ c ] == 0 ) {
                arr[ k ][ c ] = 0;
                arr[ k - 1 ][ c ] = 0;

                arr[ k ][ c ] = 1;
                arr[ k + 1 ][ c ] = 1;
            }
            else {
                break;
            }
        }
    }
}

void Get_Result () {
    int i, j;

    for ( j = 0; j < cl; j++ ) {
        for  ( i = 0; i < rw; i++ ) {
            if ( arr[ i ][ j ] == 1 ) {
                printf ("%d ", rw - i );
                break;
            }
        }
    }
    NL;
}


int main () {

    #ifdef Mir00r

        freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);

    #endif

    int i, j, tc;

    //scanf ("%d", &tc);
    scanf ("%d %d", &rw, &cl );
   // memo (arr, 0);

    //while ( tc-- ) {
        for  ( i = 0; i < rw; i++ )
            for ( j = 0; j < cl; j++ ) scanf ("%d", &arr[ i ][ j ]);

        for ( i = rw - 1; i >= 0; i-- ) {
            for  ( j = 0; j < cl; j++ ) {

                if ( arr[ i ][ j ] == 1 && arr[ i ][ j + 1 ] == 1 ) {
                    if ( Corner_Check ( i, j ) && Corner_Check ( i, j + 1 ) ) {
                       // printf ("I = %d     J = %d      J - 1 = %d\n", i, j, j-1);
                        Horizontal_Line_Process ( i, j, j + 1 );
                    }
                }

                if ( arr[ i ][ j ] == 1 && arr[ i - 1 ][ j ] == 1 ) {
                    if ( Corner_Check ( i, j ) && Corner_Check ( i - 1, j ) ) {
                        //printf ("I = %d    J = %d\n", i, j );
                        Vertical_Line_Process ( i, j );
                    }
                }
            }
        }

        Get_Result();
//        NL;
//        for  ( i = 0; i < rw; i++ ){
//            for ( j = 0; j < cl; j++ ) printf ("%d ", arr[ i ][ j ]);
//            NL;
//        }
    //}
    return 0;
}

/*
Input 
10 10
0 0 0 1 0 0 0 1 0 0
0 0 0 1 0 0 0 1 0 0
0 1 1 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 1 1
0 0 0 0 0 0 1 1 0 0
0 0 0 0 0 0 0 0 1 0
0 0 0 1 1 0 0 0 1 0
1 1 0 0 0 0 0 0 0 0
0 0 0 0 0 1 1 0 0 0
0 0 0 0 0 0 0 0 0 0

Output 
1 2 2 3 1 1 2 4 3 3 
*/
