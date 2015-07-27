/*#include<stdio.h>
int main(){
    int G , L, i, t;
    scanf("%d",&t);
    for(i = 1; i <= t; i++){
        scanf ("%d%d", &G, &L);
        if(L % G == 0)
            printf("%d %d\n", G, L);
        else
            printf ("-1\n");
    }
    return 0;;
}*/




/*#include<stdio.h>
int main(){
    int findgcd(int x,int y);
    int n1, n2, gcd;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &n1, &n2);
    gcd = findgcd(n1, n2);
    printf("\nGCD of %d and %d is: %d", n1, n2, gcd);
    return 0;
}

int findgcd(int x, int y){
    while(x != y){
          if(x > y)
              return findgcd(x-y, y);
          else
             return findgcd(x, y-x);
     }
     return x;
}*/



#include<stdio.h>
int lcm(int a,int b, int c){
    int n, cnt=0;
    for(n = 1;  ;n++){
        if(n%a == 0 && n%b == 0 && n % c == 0)
            return n;
    }
}

int main(){
    int a, b, c;
    while(scanf("%d%d%d", &a, &b, &c) == 3)
        printf("%d\n", lcm(a, b, c));
    return 0;
}
