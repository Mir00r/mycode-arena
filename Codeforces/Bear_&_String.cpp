#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI __int64
#define ULL unsigned long long
#define MAX 200

int main(){
    int len, i, j, sum, ans, tmp, cnt;
    char str[MAX];
    gets (str);
    len = strlen (str); //printf ("Len = %d\n", len);
    sum = 0; j = -1;
    for (i = 0; i < len-3; i++){
        if (str[i] == 'b' && str[i+1] == 'e' && str[i+2] == 'a' && str[i+3] == 'r'){
            j = i;
            //printf ("J = %d\n", j);
        }
        sum += (j+1);
        //printf ("Sum = %d\n", sum);
    }
    printf ("%d\n", sum);
    return 0;
}

