#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 30

int main(){
    int t, i, j, cnt, len1, len2, max;
    char str1[MAX], str2[MAX];
    scanf ("%d", &t);
    while(t--){
        scanf ("%s%s", str1, str2);
        len1 = strlen(str1);
        len2 = strlen(str2);
        if (len1 != len2) printf ("No\n");
        else{
            cnt = 0; max = 9999;
            for (i = 0; i < len2; i++){
                if (str1[i] == str2[i]) cnt++;
                else if (str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u') cnt++;
                else cnt = max;
            }
            if (cnt >= max) printf ("No\n");
            else printf ("Yes\n");
        }
    }
    return 0;
}
