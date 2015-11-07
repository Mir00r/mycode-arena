#include <bits/stdc++.h>

using namespace std;

#define MAX 10000

int main(){
	
	int tc, n, i, arr[MAX], sum;
		
	scanf ("%d", &tc);
	
	while (tc--){
		scanf ("%d", &n);
		
		/*if ( n % 2 == 0)
			tmp = n / 2;
		else
			tmp = (n / 2) + 1;
		//printf ("Tmp = %d\n", tmp);
		
		sum = 0;
		for (i = 0; i < n; i++){
			scanf ("%d", &arr[i]);
			sum += arr[i];
		}
		
	
		
		//printf ("Sum = %d\n", sum);
		if (tmp > sum)
			printf ("%d\n", abs (tmp - sum) );
		else
			printf ("0\n");*/
			
			for (i = 0; i < n; i++)
			scanf ("%d", &arr[i]);
			
		sum = 0;
		for (i = 1; i < n; i++){
			int a = arr[i];
			int b = arr[i - 1];
			
			if (a == 0 && b == 0){
				arr[i] = 1;
				sum++;
			}
		}
		printf ("%d\n", sum);
	}
	return 0;
}
