#include <stdio.h>
#include <string.h>

int main()
{
    int len, i, j, b, k;
    char n[1000];
    while(gets(n))
    {
        len = strlen(n);
        b =- 1;
        for(i = 0; i < len; i++)
        {
            if(n[i] == ' ')
            {
                for(j = i-1; j > b; j--)
                    printf("%c", n[j]);
                    printf(" ");
                    b = i;
            }
        }
        for(i = len - 1; i > b; i--)
            printf("%c", n[i]);
            printf("\n");
    }
    return 0;
}
