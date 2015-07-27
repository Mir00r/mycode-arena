#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 3000+100

int main(){
    char str[MAX];
    int n, len, i, j, tmp, cnt, ans;
    while (gets(str)){
        printf ("%s", tolower(str));
    }
    return 0;
}


/*int main(){
    int arr[MAX]={}, n, a, i;
    scanf("%d", &n);
    while(n--){
        scanf("%d", &a);
        arr[a] = 1;
    }
    for(i = 1; arr[i]; i++);
    printf("%d",i);
    return 0;
}*/
