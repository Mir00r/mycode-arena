#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <algorithm>
#include <iostream>

using namespace std;

#define LLI __int64
#define MAX 105

//char sign[5] = {"!", "?", ".", ",", "_"};

int main(){
    int len, i, j, cnt, check, tmp, Lltr, Sltr, digit, ans;
    char str[MAX];
    gets (str);
    cnt = check = Lltr = Sltr = digit = 0;
    len = strlen (str);
    for (i = 0; i < len; i++){
        if (str[i] >= 'A' && str[i] <= 'Z') Lltr++;
        if (str[i] >= 'a' && str[i] <= 'z') Sltr++;
        if (str[i] >= '0' && str[i] <= '9') digit++;
        if (str[i] == '!' || str[i] == '?' || str[i] == '.' || str[i] == ',' || str[i] == '_') cnt++;
            //puts ("Correct");
            //check = 1;break;
    }
    //printf ("L = %d\nS = %d\nD = %d\nCnt = %d\n", Lltr, Sltr, digit, cnt);
    if (len >= 5 && Lltr >= 1 && Sltr >= 1 && digit >= 1 || cnt >= 1) puts ("Correct");
    else puts ("Too weak");
    return 0;
}
