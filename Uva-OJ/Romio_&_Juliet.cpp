#include <stdio.h>
#include <math.h>

int main ()
{
    double x1, x2, y1, y2, CMD, ENF, AB_cannon, dist;
    double pi=2*acos(0.0);
    while (scanf ("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &CMD, &ENF) == 6)
    {
        AB_cannon = sqrt (pow ((x1 - x2), 2) + pow ((y1 - y2), 2));
        /*printf ("AB_cannon = %lf\n\n", AB_cannon);
        double t = (tan(CMD*pi/180));
        printf ("dist = %lf\n\n", t);
        double dst = (1 / tan(CMD*pi/180) + 1 / tan(ENF*pi/180));
        printf ("Dist = %lf\n\n", dst);
        */
        dist = AB_cannon * (1 / tan(CMD*pi/180) + 1 / tan(ENF*pi/180)); // To convert from degrees to radians, multiply by ((Degree*PI)/180o).
        printf ("%.3lf\n", dist);
    }
    return 0;
}
