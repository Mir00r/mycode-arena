#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <algorithm>
#include <iostream>

using namespace std;

#define LLI long long int
#define ULL unsigned long long
#define MAX 100005

int main(){
    int n, i, j, len, arr[MAX], tmp, sum, cnt;
    string str, ch;
    bool check;
    scanf ("%d", &n);
    while (n--){
        //scanf ("%s", str);
        cin >> str;
        sum = cnt = tmp = 0;
//        for (i = 1; i <= 26; i++)
//            arr[i] = i;

        len = str.length();
        //for (i = 1; i <= len; i++)
            //arr[str[i] - 96]++;

        for (i = 0; i < len; i++)
            sum += str[i] - 'a' + 1;
        printf ("%d\n", sum);
    }
    return 0;
}

