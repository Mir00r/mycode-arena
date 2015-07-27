#include <stdio.h>

int main()
{
    int player, sum, A, I, i;
    char str[333333];
    while (scanf ("%d%s", &player, str) == 2){
        sum = A = I = 0;
        for (i = 0; i < player; i++){
            if (str[i] == 'A')
                A++;
            if (str[i] == 'I')
                I++;
        }
        if (I == 0)
            sum += A;
        if (I == 1)
            sum = 1;
        printf ("%d\n", sum);
    }
    return 0;
}
