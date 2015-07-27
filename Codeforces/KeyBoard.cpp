#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 105
#define eps 1e-11
#define memo (array, value) memset (array, value, sizeof (array))


//char qwerty[] = "qwertyuiop";
//char asdfgh[] = "asdfghjkl;";
//char zxcvbn[] = "zxcvbnm,./";
char keyboard [32] = {"qwertyuiopasdfghjkl;zxcvbnm,./"};

int main(){
    char ch[2], str[MAX];
    int i, j, len, ans;
    scanf ("%s", ch);
    scanf ("%s", str);
    len = strlen (str);
    for (i = 0; i < len; i++){
        for (j = 0; j < 30; j++){
            if (keyboard[j] == str[i]){
                if (ch[0] == 'R') printf ("%c", keyboard[j-1]);
                else printf ("%c", keyboard[j+1]);
                break;
            }
        }
    }
    puts ("");
    return 0;
}
