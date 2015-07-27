#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <queue>
#include <stack>
#include <vector>
#include <list>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI long long int
#define ULL unsigned long long int
#define MAX 5005
#define pb push_back
#define NL puts ("")


int main(){
    int tc, len,ans;
    char str[MAX];
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%s", str);
        len = strlen (str);
        printf ("%d\n", len);
    }
    return 0;
}
