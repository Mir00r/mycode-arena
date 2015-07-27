#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 99999

int vowel_check(char ch){
    int flag = 0;
    if(ch=='a'|| ch=='A'||ch=='e'|| ch=='E'||ch=='i'|| ch=='I'||ch=='u'|| ch=='U'||ch=='o'|| ch=='O')
        flag = 1;
    return flag;
}

int main(){
    int i, j, cnt, tmp;
    char str, consonant;
    while (str = getchar()){
        if (str == EOF) return 0;
        if (vowel_check(str)){
            while (isalpha (str)){
                printf ("%c", str);
                str = getchar();
            }
            printf ("ay%c", str);
        }
        else if (isalpha (str)){
            consonant = str;
            str = getchar();
            while (isalpha (str)){
                printf ("%c", str);
                str = getchar();
            }
            printf ("%cay%c", consonant, str);
        }
        else printf ("%c", str);
    }
    return 0;
}
