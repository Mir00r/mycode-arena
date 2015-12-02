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
	int arr[MAX], i, score = 0, diff= 0, mul=0, tmp;
	
	for (i = 1; i <= 5; i++)
		scanf ("%d", &arr[i]);
		
	for (i = 1; i <= 5; i++){
		if ( arr[i] == i){
			score += 100;
		}
		else {
			diff = arr[i] - i;
			mul  = diff * 10;
			tmp = 100 - mul;
			//printf ("TMP = %d\n", tmp);
			if (tmp < 0 )
				score += 0;
			else
				score += tmp;
		}
	}
	
	printf ("%d\n", score);
	return 0;
}
	



