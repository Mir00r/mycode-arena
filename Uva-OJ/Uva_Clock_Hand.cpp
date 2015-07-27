#include<stdio.h>
#include <stdlib.h>
int main()
{
    int h, m, a, b, hr_angle, min_angle, temp;
    float d, angle;
    while(scanf("%d:%d", &h, &m) == 2)
    {
        if(h == 0 && m == 0)
            break;
        /*if(h == 12)
            h = 0;
            a = h * 5;
        if(a >= m)
            b = a - m;
        else
            b = m - a;
            b = b * 6;
        if(m > a)
            d = (float)b - (float)m / 2;
        else
            d = (float) b + (float)m / 2;
        if(d > 180)
            d = 360 - d;
        if(d < 0)
            d = d /-1;*/
        hr_angle = ((float)h*60 + (float)m) * 0.5;
        //printf ("hr_angle = %d\n", hr_angle);
        min_angle = (float)m * 6;
        //printf ("min_angle = %d\n", min_angle);
        if (min_angle > hr_angle)
            angle = (hr_angle - min_angle)/2;
        else
            angle = (hr_angle + min_angle)/2;
        //printf ("temp = %d\n", temp);
        if (angle > 180)
            angle = 360 - angle;
        if (angle < 0)
            angle = angle /-1;
        printf("%.3f\n",angle);
    }
    return 0;
}



#include<stdio.h>
int main()
{
    int h,m;s
    while(scanf("%d:%d",&h,&m)==2)
    {
        if(h==0 && m==0)break;
        float a;
        a=((h*60)*0.5)+(m*0.5)-(m*6);
        if(a<0)a*=-1;
        if(a>180.000)a=360.000-a;
        printf("%.3f\n",a);
    }
    return 0;
}
