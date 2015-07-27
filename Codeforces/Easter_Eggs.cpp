#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 1001

string str = "ROYGBIV";
int main(){
    int n, i;
    scanf ("%d", &n);
    for (i = 7; i < n; i++)
        str += str[i-4];
    cout << str << endl;
    return 0;
}
