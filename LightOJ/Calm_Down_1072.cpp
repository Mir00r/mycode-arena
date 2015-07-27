#include <stdio.h>
#include <math.h>

int main ()
{
    int t, i;
    double R, n, r;
    double pi=2*acos(0.0);
    scanf ("%d", &t);
    for (i = 0; i < t; i++)
    {
        //r = 0;
        scanf ("%.2lf%lf", &R, &n);
        //sin(pi / n) = n / (n - R) ;

        //r = (R*sin(pi/n)) / (1+sin(pi/n));
        r = sin(pi / n) * (R/sin(pi / n));
        printf ("Case %d: %.10lf\n", i+1, r);
    }
    return 0;
}
