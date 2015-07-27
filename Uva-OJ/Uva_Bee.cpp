#include <stdio.h>

int main (){
    long int year, male, total_bee, temp, i, female, p;
    while (scanf ("%ld", &year) == 1 && year >= 0){
        female = 1;
        p = 0;
        total_bee = 1;
        male = 0;
        for (i = 1; i <= year; i++){
            male = total_bee;
            //printf ("male = %ld\n", male);
            temp = female;
            //printf ("temp = %ld\n", temp);
            female += p;
           // printf ("female = %ld\n", female);
            total_bee += female;
            //printf ("total_bee = %ld\n", total_bee);
            p = temp;
            //printf ("p = %ld\n", p);
        }
        printf ("%ld %ld\n", male, total_bee);
       // scanf ("%ld", &year);
    }
    return 0;
}
