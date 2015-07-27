#include <stdio.h>
#include <string.h>

int main ()
{
    int i, len, count;
    char str[100000];
    while (gets(str))
    {
        count = 0;
        len = strlen(str);
        for (i = 1; i <= len; i++)
        {
            if(str[i]=='"')
            {
                count++;
                if(count % 2 == 1)
                    printf("``");
                else
                    printf("''");
            }
            else
                printf("%c",str[i]);
        }
        printf ("\n");
    }
    return 0;
}





/*
int main()
{
    char ch;
    int count = 0;
    while(scanf("%c", &ch) == 1)
    {
        if(ch == '"')
        {
            count++;
            if(count % 2 == 1)
                printf("``");
            else //if(count % 2 == 0)
                printf("''");
        }
        else
            printf("%c",ch);
    }
    return 0;
}*/
