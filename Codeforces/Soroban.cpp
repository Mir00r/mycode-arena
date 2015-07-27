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
#define MAX 100
#define row 100
#define col 100

char go_ichi_dama[row][col]= {"O-|-OOOO", "O-|O-OOO", "O-|OO-OO", "O-|OOO-O", "O-|OOOO-", "-O|-OOOO", "-O|O-OOO", "-O|OO-OO", "-O|OOO-O", "-O|OOOO-"};

int main(){
    char s[MAX];
    while (gets(s)){
        int i, len = strlen(s);
        for (i = len - 1; i >= 0; i--)
            printf ("%s\n", go_ichi_dama[s[i]-48]);
            //puts(go_ichi_dama[s[i]-48]);
    }
    return 0;
}
