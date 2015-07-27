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

int main(){
    int w;
    scanf ("%d", &w);
    if (w < 3) puts ("NO");
    else if (w % 2 == 0) puts ("YES");
    else puts ("NO");
    return 0;
}
