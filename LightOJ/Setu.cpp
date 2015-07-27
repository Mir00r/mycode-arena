#include<stdio.h>
#include<string.h>

int main()
{
    int t, i, j, T, x, f, Z, n, total, s[100];
    char input[10];
    scanf("%d",&t);

    for(x = 0; x < t; x++)
    {
        scanf("%d",&Z);
        f = 0;
        total = 0;
        for(i = 0; i < Z; i++)
        {
            scanf("%s", &input);
            if(strcmp(input,"donate") == 0)
            {
                scanf("%d",&n);
                total += n;
            }
            else if(strcmp(input,"report") == 0)
            {
                s[f] = total;
                f++;
            }
         }
         printf("Case %d:\n",x+1);
            for(i = 0; i < f; i++)
            {
                printf("%d\n",s[i]);
            }
    }
    return 0;
}
