#include <stdio.h>

/*int main()
{
    int i, t, len, count;
    char str[5], one[]={"one"};

    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",str);
        for( len = 0; str[len]; len++);
        count = 0;
        if(len == 5)
            printf("3\n");
        else
        {
            for( i = 0; i < len; i++)
            {
                if( one[i] == str[i])
                {
                    count++;
                }
            }
            if( count >= 2)
                printf("1\n");
            else
                printf("2\n");
        }
    }
    return 0;
}*/
#include <string.h>

int main ()
{
    int i, t;
    char str[11];
    scanf ("%d", &t);
    for (i = 1; i <= t; i++)
    {
        gets(str);
        if (strcmp(str,"owe"))
            printf ("1\n");
        else if (strcmp(str,"too"))
            printf ("2\n");
        else
            printf ("3\n");
    }
}
