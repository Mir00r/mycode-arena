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
#define PI 3.1415926535897932384626433832795

LLI GCD(LLI a, LLI b){
    if(b == 0)
        return a;
    else
        return GCD(b, a % b);
}


int main (){
	//char str[MAX];
	LLI i, N, a, b, gcd;
	
	scanf ("%lld %lld %lld", &N, &a, &b);
	
	gcd = GCD (a, b);
	//printf ("%lld\n", gcd);
	//sprintf (str, "%lld", N);
	//LLI len = strlen (str);
	
	for (i = 0; i < gcd; i++)
		printf ("%lld", N);
	NL;
	return 0;
}


/*
int N, a, b;

int divid (int v){
    int x = 1;
    while (v != 0){
        x = x * 10;
        v = v / 10;
        //printf ("X = %d     V = %d\n", x, v);
    }
    x = x / 10;
    return x;
}

int digit_cnt (int n){
	int num = n, cnt = 0;
	
	while (num != 0){
		cnt++;
		num /= 10;
	}
	return cnt;
}

int main(){
    int i, j, lomba, div, mod, fst_digit;
	scanf ("%d %d %d", &N, &a, &b);
	int num = N;
	lomba = digit_cnt (N);
  //  len = divid (N);
    
    for (i = 0; i < a-1; i++){
		for (j = 0; j < lomba; j++){
			div = divid (N);
			//printf ("DIV = %d\n", div);
			mod = N % div;
			//printf ("MOD = %d\n", mod);
			fst_digit = (N - mod) / div;
			//printf ("First Digit = %d\n", fst_digit);
			N %= div;
			//printf ("N = %d\n", N);
			num = num * 10;
			num += fst_digit;
			//printf ("NUM = %d\n", num);
			if (fst_digit == 0)
				num /= 10;
		}
		
	}
	
	printf ("%d\n", num);
    return 0;
}

*/

