
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define ULL unsigned long long
#define MAX 1000

char str[MAX];

void latter_set (int ltr){
    if (ltr){
        latter_set((ltr - 1) / 26);
        putchar ('A' + (ltr - 1) % 26);
    }
}


int main(){
    int len, n, i, j, cnt, r, c;
    scanf ("%d", &n);
    while (n--){
        gets (str);
        len = strlen (str);

        if (sscanf (str, "R%d C%d", &r, &c) == 2){
            latter_set(c);
            printf ("%d\n", r);
        }
        else{
            int sum = 0;
            for (i = 0; i <= len; i++){
                if (isalpha (str[i])){
                    sum *= 26;
                    sum += str[i] - 'A' + 1;
                }
            }
            printf ("R%sC%d\n", str, sum);
        }
    }
    return 0;
}
