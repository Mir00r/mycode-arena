#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 205

int main(){
    int n, i, j, tmp, cnt, ans, squats, a, b, x, X, time;
    char ch[MAX], str;
    scanf ("%d", &n);
    //for (i = 0; i < n; i++){
        scanf ("%s", ch);
        //str = ch[i];
    //}
    x = X = time = 0;
    for (i = 0; i < n; i++){
        if (ch[i] == 'x') x++;
        if (ch[i] == 'X') X++;
    }
//    if (X == x) time = 0;
//    else if (x == n || X == n) time = 1;
//    else if (X > x) time = n-X;
//    else time = n-x;
    //printf ("%d\n", time);
    for (i = 0; i < n; i++){
        //if (time == 0) printf ("%c", str);
        if (X > n/2 && ch[i] == 'X'){
             ch[i] = 'x';
             X--; time++;
        }
        else if (x > n/2 && ch[i] == 'x'){
            ch[i] = 'X';
            x--; time++;
        }
    }
    printf ("%d\n%s\n", time, ch);
    return 0;
}
