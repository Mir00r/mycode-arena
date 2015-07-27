#include <stdio.h>

int main(){
    int x1, x2, y1, y2, tmp1, tmp2;
    scanf ("%d%d%d%d", &x1, &y1, &x2, &y2);
    while (x1 != 0 && y1 != 0 && x2 != 0 && y2 != 0){
        //tmp1 = tmp2 = 0;
        tmp1 = x1 - x2;
        tmp2 = y1 - y2;
        if (tmp1 < 0)
            tmp1 =- tmp1;
        if (tmp2 < 0)
            tmp2 =- tmp2;
        if (x1 == x2 && y1 == y2)
            printf ("0\n");
        else if (x1 == x2 || y1 == y2)
            printf ("1\n");
        else if (tmp1 == tmp2)
            printf ("1\n");
        else
            printf ("2\n");
        scanf ("%d%d%d%d", &x1, &y1, &x2, &y2);
    }
    return 0;
}
