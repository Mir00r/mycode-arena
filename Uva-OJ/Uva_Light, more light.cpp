#include <stdio.h>
#include <math.h>
int main ()
{
    long long int n, bulb;
    long double m;
    scanf ("%lld", &n);
    while (n != 0)
    {
        m = sqrt(n);
        printf ("m = %lld\n", m);
        bulb = sqrt(n);
        printf ("bulb = %lld\n", bulb);

        if (m > bulb)
            printf ("no\n");
        else if (m == bulb)
            printf ("yes\n");
        scanf ("%lld", &n);
    }
    return 0;
}


/*#include <stdio.h>
#include <math.h>

int main()

{

    unsigned long long int num,num2;

     long double sq;

     //freopen("in10110_try.txt","r",stdin);

     while(scanf("%llu",&num)==1 && num!=0){

      sq=sqrt(num);

      num2=sqrt(num);

      if(sq>num2)
        printf("no\n");

      else if(sq==num2)
        printf("yes\n");

     }

    return 0;

}*/
