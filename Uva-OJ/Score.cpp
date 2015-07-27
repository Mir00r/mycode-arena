#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define MAX 85

int main(){
    int tc, cs=1, i, j, len, cnt, tmp, ans, sum;
    char str[MAX];
    //string str;
    scanf ("%d", &tc);
    //getchar();
    while (tc--){
        //getchar();
        //cin >> str;
        scanf ("%s", str);
        //len = str.length();
        len = strlen(str);
        sum = cnt = 0;
        for (i = 0; i < len; i++){
            if (str[i] == 'O') cnt++;
            else cnt = 0;
            sum += cnt;
        }
        printf ("%d\n", sum);
    }
    return 0;
}
