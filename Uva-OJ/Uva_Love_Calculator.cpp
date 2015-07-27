\#include<stdio.h>
#include<string.h>
#include <math.h>

int main(){
    int i, j, sum1, sum2, mod1, mod2, X, Y, A, B, temp1, temp2, S, C;
    float lob, hor, result;
    double pi=2*acos(0.0);
    char name1[40], name2[40];
    while(gets(name1) && gets(name2)){
        sum1 = 0;
        sum2 = 0;
        S = 0;
        C = 0;
        temp1 = 0;
        temp2 = 0;
        lob = 0;
        hor = 0;
        result = 0;
        for(i = 0; i < strlen(name1); i++){
            if(name1[i] >= 'A' && name1[i] <= 'Z')
                sum1 += name1[i]-'A'+1;
            else if(name1[i] >= 'a' && name1[i] <= 'z')
                sum1 += name1[i]-'a'+1;
        }
        //printf ("sum1 = %d\n", sum1);
        /*while(sum1 > 0)
        {
            mod1 = sum1 % 10;
            sum1 = sum1 / 10;
            temp1 = temp1 + mod1;

            if(temp1 > 9)
            {
                X = temp1 % 10;
                Y = temp1 / 10;
                S = X + Y;
            }
        }*/
        if(sum1 % 9 != 0)
            sum1 = sum1 % 9;
        else
            sum1 = 9;

        for(j = 0; j < strlen(name2); j++){
            if(name2[j] >= 'A' && name2[j] <= 'Z')
                sum2 += name2[j]-'A'+1;
            else if(name2[j] >= 'a' && name2[j] <= 'z')
                sum2 += name2[j]-'a'+1;
        }
        //printf ("sum2 = %d\n", sum2);

        /*while(sum2 > 0)
        {
            mod2 = sum2 % 10;
            sum1 = sum2 / 10;
            temp2 = temp2 + mod2;

            if(temp2 > 9)
            {
                A = temp2 % 10;
                B = temp2 / 10;
                C = A + B;
            }
        }*/
        if(sum2 % 9 != 0)
            sum2 = sum2 % 9;
        else
            sum2 = 9;

        /*if(temp1 < 10 && temp2 < 10)
        {
            if (temp1 > temp2)
            {
                lob = temp1;
                hor = temp2;
            }
            else
            {
                lob = temp2;
                hor = temp1;
            }
            result = (lob / hor) * 100;
            printf("%.2f %%\n",result);
        }
        else
        {
            if (S > C)
            {
                lob = S;
                hor = C;
            }
            else
            {
                lob = C;
                hor = S;
            }
            result = (lob / hor) * 100;
            printf("%.2f %%\n",result);
        }*/

        if(sum1 > sum2){
            result = (((float)sum2/(float)sum1)*100);
            printf("%.2f %%\n",result);
        }
        else{
            result = (((float)sum1/(float)sum2)*100);
            printf("%.2f %%\n", result);
        }

    }
    return 0;
}
