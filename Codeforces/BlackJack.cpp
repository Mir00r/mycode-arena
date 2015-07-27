#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 1000


int main(){
    int n;
    scanf ("%d", &n);
    if(n <= 10 || n > 21) puts("0");
    else if((n >= 11 && n <= 19) || n == 21)puts("4");
    else puts("15");

    return 0;
}
