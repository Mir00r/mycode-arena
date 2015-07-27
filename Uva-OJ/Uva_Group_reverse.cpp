#include <stdio.h>
#include <string.h>

/*void reverse(char* a)
{
    int i;
    int len = strlen(a);
    char b[102];
    for(i=0;a[i];i++)
    {
        b[i] = a[len-1-i];
    }
    b[i] = '\0';
    printf("%s",b);
}*/

int main ()
{
    int group, len, rev_str, group_len, i, j;
    char str[10000];
    while(scanf ("%d", &group) == 1)
    {
        //scanf ("%d", &group);
        //gets(str);
        if (group == 0)
            break;
        scanf (" ");
        gets(str);
        len = strlen(str);
        group_len = len / group;
        for (i = 1; i <= group; i++)
        {
            rev_str = i * group_len;
            for (j = rev_str - 1; j >= rev_str - group_len; j--)
                printf ("%c", str[j]);
        }
        printf ("\n");
    }
    return 0;
}


/*#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l,d,a,n;
    char s[1000];
    while(scanf("%d",&n)==1)
    {
         if(n==0) break;
         scanf(" ");
         gets(s);
         l=strlen(s);
         d=l/n;
         for(i=1;i<=n;i++)
          {
          a=i*d;
          for(j=a-1;j>=a-d;j--)
          printf("%c",s[j]);
          }
         printf("\n");
    }
}*/
