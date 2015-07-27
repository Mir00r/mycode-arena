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
    int n, hour, minit, second;
    scanf ("%d", &n);
    //hour = n / (24*3600);
    hour = n / 60 / 60;
    minit = n / 60 % 60;
    second = n % 60;
    printf ("%d:%d:%d\n", hour, minit, second);
    return 0;
}



//int main() {
//    int x;
//    while(cin >> x) {
//        cout << x/60/60 << ":" << x/60%60 << ":" << x%60 << endl;
//    }
//}
//
