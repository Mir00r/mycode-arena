#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define l long int
#define ll long long int
#define MAX 10000+10
#define memo(array, value) memset(array, value, sizeof(array))

int main (){
    int coins [] = {1, 2, 4, 10, 20, 40, 100, 200, 400, 1000, 2000};
    double ways [7000];
    memo (ways, 0);
    ways [0] = 1;
    for ( int i = 0; i < 11; i++ ) {
        for ( int j = 1; j <= 6000; j++ ) {
            if ( j - coins [i] >= 0 )
                ways [j] += ways [j - coins [i]];
        }
    }
    double c;
    while ( scanf ("%lf", &c) == 1){
        if (c == 0) break;
        int index = c * 20;
        printf ("%6.2lf%17.lf\n", c, ways [index]);
    }
    return 0;
}




/*int main(){
    int coins[] = {1, 2, 4, 10, 20, 50, 100, 200, 400, 1000, 2000};
	int i, j, temp;
	double ways[6000+5];
	memo (ways, 0);
	ways[0] = 1;
	for(i = 0; i < 11; i++){
		//temp = coins[i];
		for(j = 1; j <= 6000; j++)
            if (j - coins[i] >= 0)
                ways[j] += ways[j - coins[i]];
	}
    double cent;
	while(scanf("%lf", &cent) == 1){
	    if (cent == 0) break;
        int result = cent * 20;
        printf ("%6.2lf%17.lf\n", cent, ways[result]);
	}
	return 0;
}

int main (){
    int coin [] = {5,10,20,50,100,200,500,1000,2000,5000,10000};
    long way [30010];
    memo (way, 0);
    way[0]=1;
    for (int i=0;i<11;i++){
        for (int j=coin[i];j<=30010;j++)
                way [j]+=way[j-coin[i]];
    }
    long a,b;
    while (sc("%ld.%ld",&a,&b)){
        long n=a*100+b;
        if (n==0)
        break;
        pf("%3ld.%.2ld%17ld\n",a,b,way[n]);

    }
    return 0;
}*/

