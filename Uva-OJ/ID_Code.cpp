#include <stdio.h>
#include <sting.h>
#include <algorithm>

using namespace std;
int main(){
    char input[100];
    int len;
    while(gets(input) && strcmp(input,"#")){
        len = strlen(input);
        if(next_permutation(input, input+len)){
            printf ("%s", input);
            printf ("\n");
        }else{
            printf ("No Successor\n");
        }
    }
    return 0;
}
