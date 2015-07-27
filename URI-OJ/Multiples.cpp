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
    int a, b;
    while (scanf ("%d %d", &a, &b) == 2){
        if (a % b == 0 || b % a == 0) puts ("Sao Multiplos");
        else puts ("Nao sao Multiplos");
    }
    return 0;
}



