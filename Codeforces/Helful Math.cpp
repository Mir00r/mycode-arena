#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 100+10

int main(){
    char str[MAX];
    int i, j, len, tmp, cnt, ans, num[MAX];
    while (gets(str)){
        cnt = 0;
        len = strlen (str);
        for (i = 0; i < len; i++){
            if (str[i] == '+') continue;
            num[cnt++] = str[i] - 48;
        }
        sort (num, num+cnt);
        for (i = 0; i < cnt-1; i++)
            printf ("%d+", num[i]);
        printf ("%d\n", num[cnt-1]);
    }
    return 0;
}
