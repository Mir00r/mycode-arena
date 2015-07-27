#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

#define LLI long long int
#define MAX 100005
#define row 100

int main(){
    int a, b, c, ans, arr[MAX];
    while (scanf ("%d %d %d", &a, &b, &c) == 3){
        arr[0] = a;
        arr[1] = b;
        arr[2] = c;
        sort (arr, arr+3);
        for (int i = 0; i < 3; i++) printf ("%d\n", arr[i]);
        puts ("");
        printf ("%d\n%d\n%d\n", a, b, c);
    }
    return 0;
}

