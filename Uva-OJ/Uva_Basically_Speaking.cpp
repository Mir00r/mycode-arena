#include <stdio.h>
#include <math.h>

#define max 1000
int main ()
{
    int x, y, z, A, B, C, D, E, F, mod, div, temp, count, sum, base;
    long int i = 0, j = 0;
    char bin_num[max], hex_num[max];
    while (scanf ("%d%d%d", &x, &y, &z) == 3)
    {

        base = 1;
        sum = 0;
        temp = 0;
        count = 0;

        if (y == 2 && z == 10)
        {
            while (x > 0)
            {
                mod = x % z;
                sum += mod * base;
                x = x / z;
                base = base * y;
            }
            printf ("%d\n", sum);
        }
        else if (y == 2 && z == 16)
        {
            bin_num = x;
            hex_num = z;
            while(bin_num[i])
            {
                bin_num[i] = bin_num[i] - 48;
                    ++i;
            }
            --i;

            while(i - 2 >= 0)
            {
                temp =  bin_num[i - 3] *8 + bin_num[i - 2] *4 +  bin_num[i - 1] *2 + bin_num[i];
                if(temp > 9)
                    hex_num[j++] = temp + 55;
                else
                    hex_num[j++] = temp + 48;
                i = i - 4;
            }

            if(i == 1)
                hex_num[j] = bin_num[i - 1] *2 + bin_num[i] + 48;
            else if(i == 0)
                hex_num[j] =  bin_num[i] + 48;
            else
                --j;

            //printf("Equivalent hexadecimal value: ");
            while(j >= 0)
            {
                printf("%c",hex_num[j--]);
            }

        }
    }
    return 0;
}
