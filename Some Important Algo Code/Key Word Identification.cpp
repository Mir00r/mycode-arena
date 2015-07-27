
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define MAX 100
#define row 50
#define col 50

char key[row][col] = {"int", "for", "if", "else", "else if",
                    "while", "switch", "return", "float",
                    "double","break", "long", "continue", "sizeof", "char"};
char ch[MAX], str[MAX];

void cut_str(int ln){
    int j = 0;
    for (int i = 0; i < ln && ch[i] != ' '; i++){
        str[j] = ch[i];
        j++;
    }
    str[j] ='\0';
}

int main (){
    string store;
    int tc, cs=1, i, j , n, len, tmp, cnt, ans, check;
    scanf ("%d", &tc);
    while (tc--){
        //scanf ("%s%s", ch, str);
        gets (ch); //gets (str);
        len = strlen (ch);
        check = cnt = tmp = 0;
        cut_str(len);
        for (i = 0; i < 50; i++){
            if (strcmp (str, &key[i][0]) == 0){
                //store[i] = ch;
                check = 1;

            }
        }
        if (check == 1){
            printf ("%s", str);
            puts ("");
        }
        else puts ("Not Keyword");
    }
    return 0;
}
