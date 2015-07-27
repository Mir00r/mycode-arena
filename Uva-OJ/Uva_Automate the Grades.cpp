#include <stdio.h>

int main ()
{
    int t, i, sum, fct1, fct2, fct3, fct4, fct5, term1, term2, final, atten, ct1, ct2, ct3;
    scanf ("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf ("%d%d%d%d%d%d%d", &term1, &term2, &final, &atten, &ct1, &ct2, &ct3);

            if (ct1 > ct3 && ct2 > ct3)
            {
                fct1 = (ct1 + ct2) / 2;
                sum = term1 + term2 + final + atten + fct1;
            }
            else if (ct1 > ct2 && ct3 > ct2)
            {
                fct2 = (ct1 + ct3) / 2;
                sum = term1 + term2 + final + atten + fct2;
            }
            else
            {
                fct3 = (ct2 + ct3) / 2;
                sum = term1 + term2 + final + atten + fct3;
            }

            if (sum >= 90)
            {
                printf ("Case %d: A\n", i+1);
            }
            else if (sum >= 80 && sum < 90)
            {
                printf ("Case %d: B\n", i+1);
            }
            else if (sum >= 70 && sum < 80)
            {
                printf ("Case %d: C\n", i+1);
            }
            else if (sum >= 60 && sum < 70)
            {
                printf ("Case %d: D\n", i+1);
            }
            else if (sum < 60)
            {
                printf ("Case %d: F\n", i+1);
            }
    }
    return 0;
}
