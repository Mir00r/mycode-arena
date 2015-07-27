#include <stdio.h>

int main()
{
    int n, i, j, cheeck;
    scanf ("%d", &n);
    while (n != 0)
    {
        cheeck = 0;
        for (i = 1; i <= n; i++){
            for (j = 0; j < i; j++)
            {
                if (n == (i*i*i - j*j*j))
                {
                    cheeck = 1;
                    break;
                }
            }
            if (cheeck == 1)
                break;
        }
        if (cheeck == 1)
            printf ("%d %d\n", i, j);
        else
            printf ("No solution\n");
        scanf ("%d", &n);
    }
    return 0;
}



/*#include <stdio.h>

int cubes(int x)
{
    return x*x*x;
}

int main()
{
    int n, a, b, i, j;
    scanf ("%d", &n);
    while (n != 0)
    {
        a = b = 0;
        while(1){
            if (n == cubes(a) - cubes(b)){
                printf ("%d %d\n", a, b);
                break;
            }
            else if (n < cubes(a) - cubes(b))
                b++;
            else if (n > cubes(a) - cubes(b))
                a++;
            else if (cubes(a) - cubes(b) == 0 || a >= n || b >= n){
                printf ("No solution\n");
                break;
            }
        }
        scanf ("%d", &n);
    }
    return 0;
}*/
