#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 30

void pluralize (char word[]){
    int len;
    char noun;
    len = 1;
    len = strlen(word);
    if (word[len - 1] == 'y'){
        word[len - 1] = 'i';
        word[len] = 'e';
        word[len + 1] = 's';
        word[len + 2] = '\0';
    }
    else if ((word[len - 2] == 'c' && word[len - 1] == 'h') || word[len-1] == 'x' || word[len - 1] == 's' || word[len-1] == 'o'){
        //strcat(word, "es");
        word[len] = 'e';
        word[len+1] = 's';
        word[len+2] = '\0';
    }
    else if (word[len-1] == 'f'){
        //strcat (word, "ves");
        word[len-1] = 'v';
        word[len] = 'e';
        word[len+1] = 's';
        word[len+2] = '\0';
    }
    else if (word[len-2] == 'f' && word[len-1] == 'e'){
        //strcat (word, "ves");
        word[len-2] = 'v';
        word[len-1] = 'e';
        word[len] = 's';
        word[len+1] = '\0';
    }
    else{
        //strcat(word, "s");
        word[len] = 's';
        word[len+1] = '\0';
    }
}


int main (){
    int n, i;
    char str[MAX];
    scanf ("%d", &n);
    while (n--){
        scanf ("%s", str);
        pluralize(str);
        printf ("%s\n", str);
    }
    return 0;
}

/*int main (){
    int n, len, i, j, cnt, tmp, ans;
    char str[MAX];
    string ch;
    scanf ("%d", &n);
    while (n--){
        scanf ("%s", str);
        //printf ("%s\n", str);
        len = strlen (str);
        //printf ("%d\n", len);
        for (i = 0; i < len; i++)
        if (str[i] == 'ch' || str[i] == 'x' || str[i] == 's' || str[i] == 'o') printf ("%s\n", str);
    }
    return 0;
}*/
