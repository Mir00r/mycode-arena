#include <stdio.h>

int main ()
{
    int x;
    scanf ("%d", &x);
    while (x != 0) // ai conditon ta holo jokhon ami x = 0 dibo then programme ta stop hoa jab a
    {
        if (x % 2 == 0) // ai conditon ta holo just even number check korar jonno
                            //coz even number holei oita ordinary number
            printf ("%d is ordinary numbers.\n", x);
        else
        {
            if (x % 3 == 0)
                printf ("%d is a special numbers.\n", x);
            else
                printf ("%d is ordinary numbers.\n", x);
        }
        scanf ("%d", &x);
    }
    return 0;
}
