#include <stdio.h>
#include <string.h>

int main()
{
    int t, i, j, amount, total;
    char input[100];

    scanf("%d", &t);
    total = 0;
    for(i = 0; i < t; i++)
    {
        scanf("%s", &input);
        if(strcmp(input, "donate") == 0)
        {
            scanf("%d",&amount);
            total += amount;
        }
        else
        {
           printf("%d\n",total);
        }
    }
    return 0;
}
