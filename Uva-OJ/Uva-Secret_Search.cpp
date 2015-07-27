#include <stdio.h>
#include <string.h>

int main()
{
    int t, i, len;
    char str[1000];
    scanf ("%d", &t);
    getchar();
    for (i = 1; i <= t; i++)
    {
        gets(str);
        len = strlen(str);
        if (!strcmp(str , "1") || !strcmp(str , "4") || !strcmp(str , "78"))
            printf ("+\n");
        else if (str[len -1] == '5' && str[len-2] == '3')
            printf ("-\n");
        else if (str[len -1] == '4' && str[0] == '9')
            printf ("*\n");
        else if (str[0] == '1' && str[1] == '9' && str[2] == '0')
            printf ("?\n");
    }
    return 0;
}
