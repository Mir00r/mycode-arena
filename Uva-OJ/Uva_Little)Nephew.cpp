#include <stdio.h>
int main(void)
{
    int a, b, c, d, e;
    while (scanf("%d%d%d%d%d", &a, &b, &c, &d, &e) == 5)
    {
        if(a + b + c + d + e)
            printf("%d\n", a * b * c * d * d * e * e);
        else
            break;
    }
    return 0;
}
