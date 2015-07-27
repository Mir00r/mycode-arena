#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 999

char eng_num[32][32] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
                    "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen",
                    "nineteen", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"
                 };

int number[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 30, 40, 50, 60, 70, 80, 90};

int main(){
    char str[MAX];
    ll len, i, j, tmp, hundred, thousand, million, ans;
    while (gets(str)){
        len = strlen (str);

        tmp = hundred = thousand = million = 0;

        for (i = 0; i < 28; i++){

            if (str[i] == eng_num[0][i]){
                tmp += number[i];
                break;
            }
            else if (str[i] == 'negative'){
                printf ("-");
                break;
            }
            else if (str[i] == 'million'){
                million = tmp * 1000000;
                tmp = 0;
                break;
            }
            else if (str[i] == 'thousand'){
                thousand = tmp * 1000;
                tmp = 0;
                break;
            }
            else if (str[i] == 'hundred'){
                tmp *= 100;
                break;
            }
        }

        ans = million + thousand + tmp;

        printf ("%lld\n", ans);
    }
    return 0;
}
