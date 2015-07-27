
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
    int a, b, c, d, res, number, hour, tmp;
    double ans, r, fx_salary, beton, sold_value, tot_salary;
    char str[row];
    scanf ("%s", str);
    scanf ("%lf%lf", &fx_salary, &sold_value);
    tot_salary = ((sold_value * 15) / 100) + fx_salary;
    printf ("TOTAL = R$ %.2lf\n", tot_salary);
    return 0;
}



