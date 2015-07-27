#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 160

/*int bit_check (char ch[]){
    int len, i, j, plus, minus, a, b, res;
    len = strlen (ch);
    plus = minus = res = 0;
    if (ch[1] == '+') res++;
    else res--;
    for (i = 0; i < len; i++){
        //if (ch[i] == '+') plus++;
        //if (ch[i] == '-') minus++;
        if (ch[i] == '++X' || ch[i] == 'X++') res++;
        else res--;
    }
    a = plus / 2;
    b = minus / 2;
    res = abs (a-b);
    //printf ("%d\n", res);
    return res;
}
*/


int main (){
    int n, ans;
    char str[MAX];
    scanf ("%d", &n);
    ans = 0;
    while (n--){
        scanf ("%s", str);
       // ans = bit_check(str);
       // bit_check(str);
        //printf ("%d\n", ans);
        if (str[1] == '+') ans++;
        else ans--;
    }
    printf ("%d\n", ans);
    return 0;
}
