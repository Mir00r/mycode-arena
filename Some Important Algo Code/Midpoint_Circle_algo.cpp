#include <stdio.h>
#include <iostream>
#include <graphics.h>
#include <math.h>


void Circle(int Radius,int xC,int yC);
void Draw(int x, int y, int xC, int yC);


int main(){

    int gDriver = DETECT, gMode;
    initgraph(&gDriver, &gMode,"c:\\tc\\bgi");

    int Radius, xC, yC;
    puts ("Enter center point coordinates....");

    printf ("Xc: ");
        scanf ("%d", &xC);

    printf ("Yc: ");
        scanf ("%d", &yC);

    printf ("Radius: ");
        scanf ("%d", &Radius);

    cleardevice ();
    Circle(Radius, xC, yC);

    getch();
    return 0;
}


void Circle(int Radius, int xC, int yC){

    int P;
    int x,y;

//    void Draw(int x, int y, int xC, int yC);

    P = 1 - Radius;
    x = 0;
    y = Radius;
    Draw(x, y, xC, yC);

    while (x <= y){
        x++;
        if (P < 0)
            P += 2 * x + 1;
        else{
            P += 2 * (x - y) + 1;
            y--;
        }
        Draw(x, y, xC, yC);
    }

}


void Draw(int x, int y, int xC, int yC){

    putpixel (xC + x, yC + y, 12);
    putpixel (xC + x, yC - y, 12);
    putpixel (xC - x, yC + y, 12);
    putpixel (xC - x, yC - y, 12);
    putpixel (xC + y, yC + x, 12);
    putpixel (xC - y, yC + x, 12);
    putpixel (xC + y, yC - x, 12);
    putpixel (xC - y, yC - x, 12);
}
