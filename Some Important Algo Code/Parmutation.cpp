
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define L long int
#define LL long long int
#define ULL unsigned long long
#define MAX 1000
#define row 100
#define col 100
#define eps 1e-9

char *store[] = {};
int ind;


void swp (char *ch1, char *ch2){
    char tmp;
    tmp = *ch1;
    *ch1 = *ch2;
    *ch2 = tmp;
}

void permut (char *ch, int indx, int len){
    int i;
    ind = 0;
    if (indx == len){
        printf ("%s\n", ch);
        //store[ind] = ch;
        //ind++;
    }
    else {
        for (i = indx; i <= len; i++){
            //swep ((ch+indx), (ch+i));
            swp ((ch+indx), (ch+i));
            permut(ch, indx+1, len);
            //swep ((ch+indx), (ch+i));  // call for backtrack
            swp ((ch+indx), (ch+i));
        }
    }
    //printf ("\n");
}

int main(){

    #ifdef Mir00r

//        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);

    #endif

    int tc, cs=1, len, res, tmp, cnt;
    char str[MAX];
    scanf ("%d", &tc);
    while (tc--){
        //scanf ("%d", &cnt);
        scanf ("%s", str);
        len = strlen (str);
        permut (str, 0, len-1);
        //printf ("%s\n", store[cnt]);
    }
    return 0;
}
/*long double fact(int p){
    long double facts = 1;
    int i;
    for(i = 1; i <= p; i++)
        facts = facts * i;
        return(facts);
}

long npm(int n, int m){
    return(fact(n) / fact(n - m));
}

int main(){
    long n, m, npm(int , int);
    long double fact(int);
    printf("Enter value of n & m\n");
    scanf("%d %d",&n, &m);
    while (n != 0 && m != 0){
        printf("%d things taken %d at a time is %ld exactly.\n", n, m, npm(n, m));
        scanf("%d %d",&n, &m);
    }
    return 0;
}*/


