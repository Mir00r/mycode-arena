#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

#define LLI long long int
#define MAX 10000005
#define row 100

int main(){
    double n1, n2, n3, n4, n5, x, y, ans, media, avg;
    while (scanf ("%lf %lf %lf %lf", &n1, &n2, &n3, &n4) == 4){
        media = (2*n1 + 3*n2 + 4*n3 + n4) / 10;
        cout << fixed << setprecision(1);
        printf ("Media: %.1lf\n",  media);
        //cout << "Media: " << media << endl;
        if (media >= 7.0)
            puts ("Aluno aprovado.");
        else if (media < 5.0)
            puts ("Aluno reprovado.");
        else{
            scanf ("%lf", &n5);
            puts ("Aluno em exame.");
            printf ("Nota do exame: %.1lf\n", n5);
            //cout << "Nota do exame: " << n5 << endl;

            media = (media + n5) / 2;
            if (media >= 5.0)
                puts ("Aluno aprovado.");
            else
                puts ("Aluno reprovado.");

            printf ("Media final: %.1lf\n", media);
            //cout << "Media final: " << media << endl;
        }
    }
    return 0;
}

