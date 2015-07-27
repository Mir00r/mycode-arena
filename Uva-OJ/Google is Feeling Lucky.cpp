#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 1000+10

struct node{
    int relevance;
    char webside[MAX];
}arr[MAX];

int main(){
    int tc, cs=1, i, j, maxn, ans, tmp;
    scanf ("%d", &tc);
    while (tc--){
        for(i = 0; i < 10; i++) scanf ("%s%d", &arr[i].webside, &arr[i].relevance);
        maxn = 0;
        for (j = 0; j < 10; j++)
            if (maxn < arr[j].relevance) maxn = arr[j].relevance;
        printf ("Case #%d:\n", cs++);
        for (j = 0; j < 10; j++)
            if (maxn == arr[j].relevance) printf ("%s\n", arr[j].webside);
    }
    return 0;
}
