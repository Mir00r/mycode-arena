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
#define ULL unsigned long long int
#define MAX 1005
#define row 100
#define col 100
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)

int fibo[MAX], n;


void fibo_save (){
    int i;
    fibo[0] = 0;
    fibo[1] = 1;
    for (i = 2; i <= MAX; i++)
        fibo[i] = fibo[i-1] + fibo[i-2];
}

int main(){
    fibo_save();
    int ans;
    while (scanf ("%d", &n) == 1){
        printf ("The Fibonacci number for %d is %d\n", n, fibo[n]);
    }
    return 0;
}
