#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main ()
{
    int dec, hex, len, i, j=-1, k = 0, count;
    char dec_num[10001], hex_num[10001];
    while(1)
    {
        gets(dec_num);
        len = strlen(dec_num);
        if (dec_num[0] == '0' && dec_num[1] == 'x')
        {
            dec = 0;
            for(i = 2; i < len; i++)
            {
                if(dec_num[i] == 'A')
                    dec = dec * 16 + 10;
                else if(dec_num[i] == 'B')
                    dec = dec * 16 + 11;
                else if(dec_num[i] == 'C')
                    dec = dec * 16 + 12;
                else if(dec_num[i] == 'D')
                    dec = dec * 16 + 13;
                else if(dec_num[i] == 'E')
                    dec = dec * 16 + 14;
                else if(dec_num[i] == 'F')
                    dec = dec * 16 + 15;
                else
                    dec = dec * 16 + dec_num[i] - '0';
            }
            printf ("%d\n", dec);
        }
        else
        {
            count = 0;
            dec = atoi(dec_num);
            if(dec < 0)
                break;
                for(i = 0; i !=-1; i++)
                {
                    hex = dec % 16;
                    dec /= 16;
                    if(hex == 10)
                        hex_num[i] = 'A';
                    else if(hex == 11)
                        hex_num[i] = 'B';
                    else if(hex == 12)
                        hex_num[i] = 'C';
                    else if(hex == 13)
                        hex_num[i] = 'D';
                    else if(hex == 14)
                        hex_num[i] = 'E';
                    else if(hex == 15)
                        hex_num[i] = 'F';
                    else
                        hex_num[i] = hex + '0';
                        count++;
                    if(dec <= 0)
                        break;
                }
                printf("0x");
                for(i = count-1; i >= 0;i--)
                    printf("%c", hex_num[i]);
                printf("\n");

            }
    }
    return 0;
}
