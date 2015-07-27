#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 500

void swap (char *x, char *y){
    char tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

void permute (char *ch, int i, int n){
    int j;
    if (i == n) printf ("%s\n", ch);
    else{
        for (j = 1; j <= n; j++){
            swap((ch+i), (ch+j));
            permute(ch, i+1, n);
            swap((ch+i), (ch+j));
        }
    }
}

int main(){
    int tc, cs=1, len;
    char str[MAX];
    scanf ("%d", &tc);
    getchar();
    while (tc--){
        scanf ("%s", str);
        len = strlen (str);
        permute (str, 0, len);
        //putchar();
    }
    return 0;
}
