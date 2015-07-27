#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define L long int
#define LL long long int
#define ULL unsigned long long
#define MAX 100

int main(){
    int n, i, j, cnt, four, seven, tmp, len;
    char str[MAX];
    while (scanf ("%s", str) != EOF){
        len = strlen (str);
        four = seven = 0;
        for (i = 0; i < len; i++){
            if (str[i] == '4') four++;
            else if (str[i] == '7') seven++;
        }
        if (four == 0 && seven == 0) puts ("-1");
        else if (four >= seven) puts ("4");
        else puts ("7");
    }
    return 0;
}
