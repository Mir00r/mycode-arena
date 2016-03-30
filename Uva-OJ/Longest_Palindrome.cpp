#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

//#define l long int
#define ll long long int
#define MAX 1010
#define row 1010
#define col 1010
#define L __int64

char str[ MAX ];
int memo[ row ][ col ];

int longestPalin( int l, int r ) {
	if ( l == r )
		return 1;
	if ( l + 1 == r ) {
		if ( str[ l ] == str[ r ] )
			return 2;
		else
			return 1;
	}

	if ( memo[ l ][ r ] != -1 )
		return memo[ l ][ r ];

	if ( str[ l ] == str[ r ] )
		return memo[ l ][ r ] = 2 + longestPalin( l + 1, r - 1 );
	else
		return memo[ l ][ r ] = max ( longestPalin ( l, r - 1 ), longestPalin ( l + 1, r ) );
}

int main() {
	int tc, len;
	scanf("%d", &tc);
	getc( stdin );

	while ( tc-- ) {
		gets( str );
        len = strlen ( str );

		if ( len == 0) {
			printf("0\n");
			continue;
		}

		memset( memo, -1, sizeof( memo ) );
		int ans = longestPalin( 0, len - 1 );

		printf("%d\n", ans);
	}
	return 0;
}


/*
int memo[ row ][ col ];
char str[ MAX ];

int LCS ( int m, int n ){
    if ( m > n ) return 0;
    if ( m == n ) return memo[ m ][ n ] = 1;
    if ( memo[ m ][ n ] != -1 ) return memo[ m ][ n ];

    int res = 0;
    if ( str[ m ] == str[ n ]) {
       // memo[ m ][ n ] = LCS ( m + 1, n - 1 ) + 2;
        res = max ( res , LCS ( m + 1, n - 1 ) + 2 );
    }
    else{
       // memo[ m ][ n ] = max ( LCS ( m - 1, n ), LCS ( m, n - 1 ) );
        res = max ( res, LCS ( m + 1, n ) );
        res = max ( res, LCS ( m, n - 1 ) );
    }
    return memo[ m ][ n ] = res ;
}


int main(){
    int tc, len, tmp;
    scanf ("%d", &tc);
    getchar();
    while (tc--){
        gets(str);
        //scanf ("%s", str);
        len = strlen(str);
        memset ( memo, -1, sizeof (memo) );
        len--;

        if ( len != 0 ) {
            tmp = LCS ( 0, len );
            printf ("%d\n", tmp);
        }
        else
            puts ("0");
    }
    return 0;
}
*/
