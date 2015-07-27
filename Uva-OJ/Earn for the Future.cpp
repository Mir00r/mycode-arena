#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 99988

/*int main(){
    int tc, i, j, cs=1, n, x, rem;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d", &n);
        //rem = 0;
        for (i = 0; i < n; i++){
            scanf ("%d", &x);
            rem = 0;
            rem = max (rem, x);
        }
        printf("Case %d: %d\n", cs++, rem);
    }
    return 0;
}*/


char s[100005];

void out(int n);
void out2(int n);

main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);

    int T,t,i,j;
    scanf(" %d",&T);
    gets(s);
    for(t=0;t<T;t++){
        gets(s);
        int a[105] = {0},now = 0;
        for(i=0;s[i];i++){
            if(s[i]=='.')
                continue;
            else if(s[i]=='>')
                now++;
            else if(s[i]=='<')
                now--;
            else if(s[i]=='+')
                a[now]++;
            else if(s[i]=='-')
                a[now]--;
            a[now] = (a[now]+256)%256;
            now = (now+100)%100;
        }
        printf("Case %d:",t+1);
        for(i=0;i<100;i++){
            printf(" ");
            out(a[i]);
        }
        printf("\n");
    }
}
void out(int n){
    int a = 0,b = 0;
    while(n>=16){
        n -= 16;
        a++;
    }
    out2(a);
    out2(n);
}
void out2(int n){
    if(n<10)
        printf("%d",n);
    else if(n==10)
        printf("A");
    else if(n==11)
        printf("B");
    else if(n==12)
        printf("C");
    else if(n==13)
        printf("D");
    else if(n==14)
        printf("E");
    else if(n==15)
        printf("F");
}
