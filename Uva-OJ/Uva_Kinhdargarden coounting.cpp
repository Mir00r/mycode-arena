#include <stdio.h>
#include <ctype.h>

int main (){
    int count = 0, i = 0;
    char a[100000];
    while(gets(a)){
        while (a[i] != NULL){
            if (isspace(a[i])){
                count++;
            }
            i++;
        }
        printf ("%d\n", count+1);
    }
    return 0;
}
