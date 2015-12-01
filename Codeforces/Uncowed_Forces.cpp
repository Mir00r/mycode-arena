#include <bits/stdc++.h>

using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define LLU long long unsigned
#define row 205
#define col 205
#define MAX 1006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 7477777
#define PI 3.1415926535897932384626433832795


int main(){
	int m[MAX], w[MAX], hs, hu, i, x;
	double res = 0.0, hack;
	
	for (i = 1; i <= 5; i++)
		scanf ("%d", &m[i]);
		
	for (i = 1; i <= 5; i++)
		scanf ("%d", &w[i]);
		
	scanf ("%d %d", &hs, &hu);
	
	hack = ( 100.0 * hs ) - ( 50 * hu );
	
	for (i = 1; i <= 5; i++){
		x = i * 500;
		
		res = max ( 0.3 * (double)x, ( ( ( 1 - (double)m[i] / (double)250 ) * (double)x) - ( (double)50 * (double)w[i] ) ) );
		hack += res;
	}
	printf ("%.lf\n", hack);
	
	// Precetion calculation is very much important for this type operation so be carefull
	
	return 0;
}
	
