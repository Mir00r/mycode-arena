#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <set>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

#define L long int
#define LL long long int
#define ULL unsigned long long
#define MAX 999999
#define row 100
#define col 100
#define eps 1e-9
#define Pi 3.1415926535897932384626433832795
#define pi 3.14159

int main(){
    double n;
    scanf ("%lf", &n);
    if (n >= 0 && n <= 25) puts ("Intervalo [0,25]");
    else if (n > 25 && n <= 50) puts ("Intervalo (25,50]");
    else if (n > 50 && n <= 75) puts ("Intervalo (50,75]");
    else if (n > 75 && n <= 100)puts ("Intervalo (75,100]");
    else puts ("Fora de intervalo");
    return 0;
}
