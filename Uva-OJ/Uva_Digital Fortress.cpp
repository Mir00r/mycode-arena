#include <stdio.h>
#include <math.h>
#include <string.h>

int main ()
{
    int len, i, j, k, t, str_range1;
    float str_range2;
    char text[100000];
    scanf ("%d", &t);
    for (i = 0; i < t; i++)
    {
        gets(text);
        len = strlen(text);
        str_range2 = sqrt(len);
        str_range1 = sqrt(len);

        if (str_range1 == str_range2)

            for (j = 0; j < str_range1; j++)

                for (k = j; k < len; k+=str_range1)
                    printf ("%c", text[k]);

        else
            printf ("INVALID");
            printf ("\n");
    }
    return 0;
}






/*#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int i,j,k,l,t,sr1;
    float sr2;
    char s[100000];
    while(scanf("%d",&t)==1)
    {
        scanf("\r");
        for(i=0;i<t;i++)
        {
            gets(s);
            l=strlen(s);
            sr2=sqrt(l);
            sr1=sqrt(l);
            if(sr1==sr2)
                for(j = 0; j < sr1; j++)
                    for(k = j; k<l; k+=sr1)
                        printf("%c",s[k]);
            else
                printf("INVALID");
            printf("\n");
        }
    }
}*/
