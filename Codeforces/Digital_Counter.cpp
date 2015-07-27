#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <set>
#include <map>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define ULL unsigned long long
#define MAX 10000005

int make_num[] = {2, 7, 2, 3, 3, 4, 2, 5, 1, 2};

int main(){
    int n, ans, i, j;
    scanf ("%d", &n);
    ans = make_num[n % 10] * make_num[n / 10];
    printf ("%d\n", ans);
    return 0;
}
