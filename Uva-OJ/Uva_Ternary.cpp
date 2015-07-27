#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <queue>
#include <stack>
#include <vector>
#include <list>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI long long int
#define ULL unsigned long long LLI
#define MAX 250005+5
#define row 55
#define col 55
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define SET (a) memset(a, -1, sizeof(a))
#define CLR (a) memset(a, 0, sizeof(a))
#define CH_CLR (a) memset(a, '\0', sizeof(a))
#define eps 1e9
#define mod 1000000007


int main(){
    LLI bin[100000], cnt, n, i, mod;

    scanf("%lld", &n);

        while (n >= 0){
            cnt = 0;
            if (n == 0) printf ("0\n");
            else{
                while(n > 0){
                    mod = n % 3;
                    bin[cnt] = mod;
                    n = n / 3;
                    cnt++;
                }
                for(i = cnt - 1; i >= 0; i--)
                    printf("%lld", bin[i]);
                printf("\n");
            }
        scanf("%lld", &n);
        }
    return 0;
}





/*
int main (){
    int ter[10000],i,mod,  N=1, dec;
    while (scanf("%d",&dec) && dec>=0 && N<=100)
    {
        N++;
        if(dec==0)
        printf("0");
        for(i=0; dec != 0; )
        {
            mod = dec % 3;
            ter[i]= mod;
            i++;
            dec= dec / 3;
        }
    i--;
    for ( ; i>=0;i--)
        printf("%d",ter[i]);

    printf("\n");
  }

  return 0;
}
*/





/*#include <stdio.h>
#include <string.h>
int change_bin(char *bin)
{
  int  b , k, n;
  int  len, sum = 0;

  len = strlen(bin) - 1;
  for(k = 0; k <= len; k++)
  {
      b = 1;
      n = (bin[k] - '0');
      b = b<<(len-k);
      sum = sum + n * b;
  }
  return(sum);
}

int main ()
{
    int change_bin(char *bin);
    char *ter;
    int dec;
    while (scanf ("%s", &ter) == 1)
    {
        dec = change_bin(ter);
        printf ("%d\n", dec);
    }
}*/
