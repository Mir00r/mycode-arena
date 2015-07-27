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
#define MAX 5
#define row 100
#define col 100
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)


int main(){
    int i, j, cnt, tmp, ans, arr[MAX];
        for (i = 0; i < 4; i++)
            scanf ("%d", &arr[i]);
        sort (arr, arr+4);

        if (arr[0]+arr[1] > arr[2] || arr[1]+arr[2] > arr[3] )
            puts("TRIANGLE");
        else if (arr[0]+arr[1] == arr[2] || arr[1]+arr[2] == arr[3] )
            puts ("SEGMENT");
        else
            puts ("IMPOSSIBLE");
    return 0;
}


/*int main(){
    int a, b, c, d, cnt, tmp, ans;
    while (scanf ("%d%d%d%d", &a, &b, &c, &d) == 4){
        if (a+b > c || b+c > d) puts("TRIANGLE");
        else if (a+b == c || b+c == d) puts ("SEGMENT");
        else puts ("IMPOSSIBLE");
    }
    return 0;
}*/
