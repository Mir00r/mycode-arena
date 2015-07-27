/*#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main ()
{
    int a, b, c, ch;
    scanf ("%d%d", &a, &b);
    while (a >= 0 && b >= 0)
    {
        if (a == 0 && b <= 99)
        {
            c = 100 - b;
            printf ("%d\n", c);
        }
        else if (b == 0 && a <= 99)
        {
            c = 100 - a;
            printf ("%d\n", c);
        }
        else if (a == b)
        {
            c = b - a;
            printf ("%d\n", c);
        }
        else
        {
            c = abs(a - b);
            printf ("%d\n", c);
        }
        scanf ("%d%d", &a, &b);
    }
    return 0;
}*/

/*#include <cstdio>
int main(void)
{
    for(int a, b, z; scanf("%d %d", &a, &b) == 2 && (a >= 0); )
    {
        z = (b - a + 100) % 100;
        printf("%d\n", z > 50 ? 100 - z : z);
    }
    return 0;
}*/



#include<stdio.h>
#include<stdlib.h>
int main()
{
 int a,b,i,c;
 while(scanf("%d%d",&a,&b)== 2 && a >= 0 && b >= 0)
 {
    c = abs(a - b);
    if(c >= 50)
    c = 100 - c;
    printf("%d\n",c);
 }
 return 0;
}

