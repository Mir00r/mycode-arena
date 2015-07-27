#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 999

int main(){
    int a, b, c, ans, tmp, cnt;
    while (scanf ("%d%d%d", &a, &b, &c) == 3){
        if (a == 0 && b == 0 && c == 0) printf ("*\n");
        else if (a == 1 && b == 1 && c == 1) printf ("*\n");
        else if (a == 1 && b == 1 && c == 0) printf ("C\n");
        else if (a == 0 && b == 0 && c == 1) printf ("C\n");
        else if (a == 1 && b == 0 && c == 0) printf ("A\n");
        else if (a == 0 && b == 1 && c == 1) printf ("A\n");
        else if (a == 0 && b == 0 && c == 1) printf ("C\n");
        else if (a == 1 && b == 1 && c == 0) printf ("C\n");
        else if (a == 0 && b == 1 && c == 0) printf ("B\n");
        else if (a == 1 && b == 0 && c == 1) printf ("B\n");
    }
    return 0;
}
