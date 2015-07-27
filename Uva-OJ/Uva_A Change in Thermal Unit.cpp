#include <stdio.h>

int main ()
{
    int i;
    double t,cel, c, far, d, temp;
    scanf ("%lf", &t);
    for (i = 0; i < t; i++)
    {
        scanf ("%lf%lf", &cel, &d);
        if (cel >= 0 && d <= 100)
        {
            far = 9 * cel / 5 + 32;
            temp = far + d;
            c = 5 * (temp - 32) / 9;
            printf ("Case %d: %.2lf\n", i+1, c);
        }
    }
    return 0;
}
