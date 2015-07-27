#include <graphics.h>
#include <stdio.h>
#include <math.h>



int main( ){

    double x, y, x1, y1, x2, y2, dx, dy, pixel;
    int i, gd, gm;

    printf("Enter the value of x1 : ");


    while (scanf ("%lf", &x1) == 1){
        printf("Enter the value of y1 : ");
        scanf("%lf", &y1);

        printf("Enter the value of x2 : ");
            scanf("%lf", &x2);

        printf("Enter the value of y1 : ");
            scanf("%lf", &y2);

        detectgraph(&gd, &gm);
        initgraph(&gd, &gm,"");

        dx = abs(x2 - x1);
        dy = abs(y2 - y1);

        if(dx >= dy)
            pixel = dx;
        else
            pixel = dy;

        dx = dx / pixel;
        dy = dy / pixel;

        x = x1;
        y = y1;

        for (i = 1; i <= pixel; i++){
              putpixel(x, y, 1);
              x = x + dx;
              y = y + dy;
            // delay(100);
        }

        getch();
        closegraph();

    }
    return 0;
}





/*
Why DDA algorithm ?

DDA Algorithm is used to plot line between two nodes i.e two end points in computer system.
While our computer understand pixels, if we want to plot a line, we should have maximum intermediate
vertices of the line i.e intermediate points, so as to generate a straight line. Here DDA does the same.

*/
