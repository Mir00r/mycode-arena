#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stack>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 105
#define row 102
#define col 101
#define NL puts ("")


int n, m;

void hash_pf (){
    int i, j;
    for (i = 1; i <= m; i++)
        printf ("#");
    NL;
}

void hash_dot_rev (){
    int i, j;
    for (i = 1; i <= m; i++){
        if (i == m) printf ("#");
        else
            printf (".");
    }
    NL;
}


void hash_dot (){
    int i, j;
    for (i = 1; i <= m; i++){
        if (i == 1) printf ("#");
        else
            printf (".");
    }
    NL;
}


int main(){
    int i, j, k, div;
    scanf ("%d %d",&n, &m);
//    hash_pf();
//    hash_dot_rev();
//    hash_pf();
//    hash_dot();
//    hash_pf();

    for (i = 1; i <= n; i++){
        if (i % 2 != 0)
            hash_pf();
        else{
            div = i / 2;
            if (div % 2 != 0)
                hash_dot_rev();
            else
                hash_dot();
        }

    }
    return 0;
}
