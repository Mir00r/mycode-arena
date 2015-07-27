/*
    Name: Abdur Razzak
    ID : 113-15-1565
    Sec - A
    Problem Name: find keyword or not Keyword
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define MAX 1000
#define row 100
#define col 50

char key[row][col] = {"int", "array", "for", "if", "else", "else if",
                        "float", "double", "while", "do", "char", "break",
                        "scanf", "printf", "vector", "map","struct"
                    };

int main (){
    int tc, cs=1, n, i, j, len, cnt, ans, check, tmp;
    char ch[MAX];
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%s", ch);
        len = strlen (ch);
        check = cnt = ans = 0;
        for (i = 0; i < sizeof (key); i++){
            if (strcmp (ch, &key[0][i]) == 0){
                check = 1;
                break;
            }
        }
        if (check == 1) puts ("Keyword");
        else puts ("Not Keyword");
    }
    return 0;
}
