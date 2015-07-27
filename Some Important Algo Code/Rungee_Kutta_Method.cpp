/*
    Author  :- Abdur Razzak
    Topic Name  :- Rungee Kutta Method
    Date    :- 8/12/13
    Sub     :- Numerical Method
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define L long int
#define LL long long int
#define ULL unsigned long long
#define MAX 9999
#define row 100
#define col 100
#define mx_it 100
#define new_line printf ("\n")
#define eps 1e-9

double y_0, x0, y_1, x1, n, h, k1, k2, k3, k4, a, b, c;
  int j, i=1;
double calculation (double a, double b){
    double root;
    root = sqrt (a+b);
    return root;
}

/*void Runje_Kutta(){
    x0 = a; n = b;
    while (x0 <= n){
        printf ("Iteration %d:\n", i);
        k1 = calculation(x0, y_0);
        k1 *= h;
            printf ("K1 = %lf\n", k1);
        k2 = calculation((x0+h/2), (y_0+k1/2));
        k2 *= h;
            printf ("K2 = %lf\n", k2);
        k3 = calculation((x0+h/2), (y_0+k2/2));
        k3 *= h;
            printf ("K3 = %lf\n", k3);
        k4 = h * calculation((x0+h), (y_0+k3));
        k4 *= h;
            printf ("K4 = %lf\n", k4);
        y_1 = y_0 + ((k1+(2*k2)+(2*k3)+k4) / 6);
        x1 = x0 + h;
        printf ("\tX1 = %lf\tY1 = %lf\n", x1, y_1);
        i++;
    }
}
*/
void Runje_Kutta(){
    while(x0 <= a){
        printf("\nitteration %d:\n", i);
        k1 = calculation(x0, y_0);
        k1 = k1 * h;
        printf("k1=> %lf\n",k1);
        b = x0 + h/2;
        c = y_0 + k1/2;
        k2 = calculation(b, c);
        k2 = k2 * h;
        printf("k2=> %lf\n", k2);
        b = x0 + h/2;
        c = y_0 + k2/2;
        k3 = calculation(b, c);
        k3 = k3 * h;
        printf("k3=> %lf\n",k3);
        b = x0 + h;
        c = y_0 + k3;
        k4 = calculation(b, c);
        k4 = k4 * h;
        printf("k4=> %lf\n",k4);
        y_1 = y_0 + (k1+(2*k2)+(2*k3)+k4)*.166;
        printf("\ny(%.4lf) = %.3lf \n\n", x0+h, y_1);
        y_0 = y_1;
        x0 = x0 + h;
        i++;
    }
}

int main(){
    int tc;
    printf ("Enter Test Case: ");
    scanf ("%d", &tc);
    while (tc--){
        printf("\nEnter the value of range: ");
        scanf("%lf%lf", &x0, &a);
        printf("\nEnter the value of y0: ");
        scanf("%lf", &y_0);
        printf("\nEnter the value of h: ");
        scanf("%lf", &h);
        Runje_Kutta();
    }
    return 0;
}

/*double x, x0, Y_1=0, y_0, res, tmp, h, k1, k2, k3, k4, sum;
    int tc, cs=1, n, itr, i, j, k, cnt;
double calculation (double a, double b){
    double root;
    root = sqrt (a+b);
    return root;
}

void Runje_Kutta(){
    for (i = 1; i <= itr; i++){
        printf ("Iteration %d:\n", i);
        k1 = h * calculation(x0, y_0);
            printf ("K1 = %lf\n", k1);
        k2 = h * calculation((x0+h/2), (y_0+k1/2));
            printf ("K2 = %lf\n", k2);
        k3 = h * calculation((x0+h/2), (y_0+k2/2));
            printf ("K3 = %lf\n", k3);
        k4 = h * calculation((x0+h), (y_0+k3));
            printf ("K4 = %lf\n", k4);
        y_1 = y_0 + ((k1+(2*k2)+(2*k3)+k4) / 6);
        x0 += h;
        printf ("\tX = %lf\tY_1 = %lf\n", x, Y_1);
    }
}

int main(){
    printf ("Enter Test Case number: ");
    scanf ("%d", &tc);
    new_line;
    while (tc--){
        printf ("Enter the value of x where value of y to be found: ");
        scanf ("%lf", &x);
        new_line;
        printf ("Enter the starting value of x and y: ");
        scanf ("%lf%lf", &x0, &y_0);
        new_line;
        printf ("Enter the max number iteration: ");
        scanf ("%d", &itr);
        printf ("X = %lf\tX0 = %lf\ty_0 = %lf\tn = %d\n", x, x0, y_0, itr);
        h = (x-x0) / 2;
        Runje_Kutta();
    }
    return 0;
}*/



/*while(x0 <= a){
    printf("\nitteration %d:\n",i);
    k1=F(x0,y0);
    k1=k1*h;
    printf("k1=> %lf\n",k1);
    b=x0+h/2;
    c=y0+k1/2;
    k2 =F(b,c);
    k2=k2*h;
    printf("k2=> %lf\n",k2);
     b=x0+h/2;
    c=y0+k2/2;
    k3 =F(b,c);
    k3=k3*h;
    printf("k3=> %lf\n",k3);
     b=x0+h;
    c=y0+k3;
    k4 =F(b,c);
    k4=k4*h;
    printf("k4=> %lf\n",k4);
    y1 =y0+(k1+(2*k2)+(2*k3)+k4)*.166;
    printf("\ny(%.4lf) = %.3lf \n\n",x0+h,y1);
    y0=y1;
    x0=x0+h;
    i++;
  }*/
