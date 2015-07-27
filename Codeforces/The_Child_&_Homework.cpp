#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 105

int main (){
    int a, b, c, d, i, j, ans, cnt, tmp, check;
    char A[MAX], B[MAX], C[MAX], D[MAX];
    scanf ("%s%s%s%s", A, B, C, D);
    a = strlen (A) - 2;
    b = strlen (B) - 2;
    c = strlen (C) - 2;
    d = strlen (D) - 2;
    ans = tmp = cnt = check = 0;
    if ((a >= 2*b && a >= 2*c && a >= 2*d) || (a*2 <= b && 2*a <= c && a*2 <= d)) puts ("A");
    else if ((b >= 2*a && b >= 2*c && b >= 2*d) || (b*2 <= a && b*2 <= c && b*2 <= d)) puts ("B");
    else if ((c >= 2*a && c >= 2*b && c >= 2*d) || (c*2 <= a && c*2 <= b && c*2 <= d)) puts ("C");
    else if ((d >= a*2 && d >= b*2 && d >= c*2) || (d*2 <= a && d*2 <= b && d*2 <= c)) puts ("D");
    else puts ("C");
    return 0;
}
