#include <stdio.h>
#include <string.h>

int main()
{
    char str[999999999];

    char word[28] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen",
                "nineteen", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    int number[28] =  {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 30, 40, 50, 60, 70, 80, 90 };
    int i, len;
    while(gets(str))
    {
        len = strlen(str);
        long long int million = 0, thousand = 0, hundred = 0, temp = 0;
        while(len > 0)
        {
            for(i = 0; i < 28; i++)
                if(str == word[i])
                {
                    temp += number[i];
                    break;
                }
                else if(str == "negative")
                {
                    printf ("-");
                    break;
                }
                else if(str == "million")
                {
                    million = temp * 1000000;
                    temp = 0;
                    break;
                }
                else if(str == "thousand")
                {
                    thousand = temp * 1000;
                    temp = 0;
                    break;
                }
                else if(str == "hundred")
                {
                    temp = temp * 100;
                    break;
                }
        }
        printf ("%lld%lld%lld", million+thousand+hundred);
    }
    return 0;
}
