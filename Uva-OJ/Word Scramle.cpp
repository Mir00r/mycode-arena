#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 99999

int main(){
    int i, j, len, cnt, tmp;
    char str[MAX], ch;
    while (scanf ("%s", str) != EOF){
        //if (str == EOF) return 0;
        ch = getchar();
        len = strlen(str);
        for (i = len-1; i >= 0; i--) printf ("%c", str[i]);
        //ch = getchar();
        putchar(ch); // for newline
    }
    return 0;
}
