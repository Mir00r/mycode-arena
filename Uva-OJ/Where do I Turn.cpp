#include <stdio.h>

int main (){
    long long int x1, x2, x3, y1, y2, y3;
    while (scanf ("%l64d%l64d%l64d%l64d%l64d%l64d", &x1, &y1, &x2, &y2, &x3, &y3) == 6){
        if (x1 == y1 && x2 == y2 && x3 == y3)
            printf ("TOWARDS\n");
        else if (( x1 && y1 < 0 )&& (x2 && y2 < 0) && ( x3 && y3 < 0))
            printf ("LEFT\n");
        else
            printf ("RIGHT\n");
    }
    return 0;
}
