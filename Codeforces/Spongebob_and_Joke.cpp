#include <bits/stdc++.h>

using namespace std;

#define MAX 100000 + 10
#define row 100
#define col 100
#define NL puts("")
//#define LLI __int64


int main(){
	
	int n, m, i;
	scanf("%d %d", &n, &m);
	int arr[n], brr[m];
	
	for( i = 0; i < n; i++) scanf ("%d", &arr[i]);
	for( i = 0; i < m; i++) scanf ("%d", &brr[i]);
	
	map<int, int>s;
	
	for( i = 0; i < n; i++){
		if(s[ arr[i] ] == 0){
			//puts ("Zero OK");
			s[ arr[i] ] = i+1;
		}
		else {
		//	puts ("Minus OK");
			s[ arr[i] ] =-1;
		} 
	}
	
	for( i = 0; i < m; i++)
		if(s[ brr[i] ] == 0){
			puts ("Impossible");
			return 0;
		}
	for( i = 0; i < m; i++)
		if( s[ brr[i] ] == -1){
			puts ("Ambiguity");
			return 0;
		}
	puts ("Possible");
	for( i = 0; i < m; i++)
		printf ("%d ", s[ brr[i] ]);
	return 0;
}


/*
int q[MAX], w[MAX], used[MAX], yer[MAX], cevap[MAX];

int main(){
	
	int n, m, i;
	scanf("%d %d",&n,&m);
	
	for(i = 1; i <= n; i++){
		scanf("%d", &q[i]);
		used[ q[i] ]++;
		yer[ q[i] ] = i;		
	}
	for(i = 1; i <= m; i++){
		scanf("%d", &w[i]);
		
		if( used[ w[i] ] == 0){
			puts("Impossible");
			return 0;
		}		
	}
	
	for(i = 1 ; i <= m ; i++){
		if(used[ w[i] ] > 1){
			puts("Ambiguity");
			return 0;
		}
		cevap[i] = yer[ w[i] ];
	}
	puts("Possible");
	for(i = 1 ; i <= m ; i++)
		printf("%d ",cevap[i]);
	
	return 0;
}
*/

