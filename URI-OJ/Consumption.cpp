
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
    double tot_distance, spent_fuel, tmp;
    double Consumption;
    scanf ("%lf%lf", &tot_distance, &spent_fuel);
    Consumption = tot_distance / spent_fuel;
    printf ("%.3lf km/l\n", Consumption);
    return 0;
}







