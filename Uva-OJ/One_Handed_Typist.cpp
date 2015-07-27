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
#define eps 1e-11
#define memo (array, value) memset (array, value, sizeof (array))

    char qwerty[] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    char QWERTY[] = "~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?";
    char dvorak_down_cs[] = "`123qjlmfp/[]456.orsuyb;=\\789aehtdck-0zx,inwvg'";
    char Dvorak_up_cs[] = "~!@#QJLMFP?{}$%^>ORSUYB:+|&*(AEHTDCK_)ZX<INWVG\"";

int check, i, j, ans;
char str[MAX];


int main(){
    while(gets(str)){
        for (i = 0; i < strlen(str); i++){
            check = 0;
            for (j = 0; j < strlen(qwerty); j++){
                if (str[i] == qwerty[j]){
                    printf ("%c", dvorak_down_cs[j]);
                    check = 1;
                    break;
                }
                if (str[i] == QWERTY[j]){
                    printf ("%c", Dvorak_up_cs[j]);
                    check = 1;
                    break;
                }
            }
            if (check == 0) printf ("%c", str[i]);
        }
        printf ("\n");
    }
    return 0;
}

