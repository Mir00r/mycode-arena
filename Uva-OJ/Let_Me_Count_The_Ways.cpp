#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define row 1005
#define col 35
#define MAX 30006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define eps 1e9
#define mod 1000000007

LLI coin[6] = {1, 5, 10, 25, 50};

LLI way[MAX];



int main(){
    LLI i, j, v = 5, n, c;

    memo (way, 0);

    way[0] = 1;

    for(i = 0; i < v; i++){
        c = coin[i];
        for(j = c; j <= MAX; j++)
            way[j] += way[j - c];
    }

    while(scanf("%lld", &n) == 1){
        if(way[n] != 1 && n != 1)
            printf("There are %lld ways to produce %lld cents change.\n", way[n],  n);
        else
            printf("There is only %lld way to produce %lld cents change.\n",way[n], n);
    }
    return 0;
}







/*



LLI dp[6][MAX];


LLI cal (LLI indx, LLI val){
    LLI a, b;

    if (indx >= 6){
        if (val == 0)
            return 1;
        else
            return 0;
    }

    a = b = 0;
    LLI &res = dp[indx][val];

    if (res != -1)
        return res;

    if (val - coin[indx] >= 0)
        a = cal (indx, val - coin[indx]);

    b = cal (indx+1, val);

    dp[indx][val] = a | b;
    res = dp[indx][val];

    return res;
}


int main (){
    LLI n, ans;
    while (scanf ("%lld", &n) == 1){
        memo (dp, -1);

        ans = cal (0, n);

        if(ans != 1 && n != 1)
            printf("There are %lld ways to produce %lld cents change.\n", ans,  n);
        else
            printf("There is only %lld way to produce %lld cents change.\n", ans, n);
    }
    return 0;
}





int main ()
{
    long long int coin[7], ways[30002]={0}, paisa, i, j, k, temp;
    coin[1] = 1, coin[2] = 5, coin[3]=10, coin[4]=25, coin[5]=50;
    ways[0] = 1;
    for (i = 1; i <= 5; i++)
    {
        for (j = coin[i]; j <= 30002; j++)
        {
            temp = j - coin[i];
           // printf("%d  %d\n",temp,ways[j]);
            ways[j] = ways[j] + ways[temp];
        }
    }
  /*  for(i=1;i<=20;i++)
        printf("%d ",ways[i]);*/
    /*while (scanf ("%lld", &paisa) == 1)
    {
        if (ways[paisa] != 1 && paisa != 1)
            printf ("There are %lld ways to produce %lld cents change.\n", ways[paisa], paisa);
        else
            printf ("There is only %lld way to produce %lld cents change.\n", ways[paisa], paisa);
    }
    return 0;
}




int coins[] = {1,5,10,25,50};
int main()
{
	int i,coin,j;
	ways[0]=1;
	for(i=0;i<5;i++)
	{
		coin = coins[i];
		for(j=coin;j<30005;j++)
			ways[j]+=ways[j-coin];

	}
	while(scanf("%d",&i)==1)
	{
		if(ways[i]>1)
			printf("There are %llu ways to produce %d cents change.\n",ways[i],i);
		else
			printf("There is only 1 way to produce %d cents change.\n",i);
	}
	return 0;
}
*/
