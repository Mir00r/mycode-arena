#include <stdio.h>

int main (){
    int a, b, c, count, result;
    char ch, ques[100];
    count = 0;
    while (gets(ques)){
        if (sscanf (ques, "%d%c%d=%d", &a, &ch, &b, &c) != 4)
            continue;
        switch(ch){
            case '+':
                result = a + b;
                break;
            case '-':
                result = a - b;
                break;
        }
        if (result == c)
            count++;
    }
    printf ("%d\n", count);
    return 0;
}
