#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define ul unsigned long int
#define MAX 99999


int main(){
    int i, j, tmp_1, tmp_2, sum, tmp, result;
    l num_of_book, ptr_money, book[MAX], first_book[MAX], second_book[MAX], diffrence[MAX];

    while(scanf ("%ld", &num_of_book) == 1){
        sum = 0;
        int k = 0, min = 1000000;;

        for (i = 0; i < num_of_book; i++) scanf ("%ld", &book[i]);
        scanf ("%ld", &ptr_money);

        for (i = 0; i < num_of_book; i++){
            for (j = i+1; j < num_of_book; j++){
                sum = book[i] + book[j];
                if (sum == ptr_money){

                    if (book[i] < book[j]){
                        first_book[k] = book[i];
                        second_book[k] = book[j];
                    }
                    else{
                        first_book[k] = book[j];
                        second_book[k] = book[i];
                    }
                    diffrence[k] = second_book[k] - first_book[k];
                    k++;
                }
            }
        }

        for (i = 0; i < k; i++){
            if (min > diffrence[i]){
                min = diffrence[i];
                tmp = i;
            }
        }
        printf ("Peter should buy books whose prices are %ld and %ld.\n\n", first_book[tmp], second_book[tmp]);


        /*
        sort(book, book + num_of_book);
        for (i = 0; i < num_of_book; i++){
            int tmp = ptr_money - book[i];
            result = binary_search(book, i, num_of_book, tmp);
            if (result >= 0 && (book[result] - book[i] < y-x) || (x == -1 && y == -1))
            x = book[i];
            y = book[result];
        }
        printf ("Peter should buy books whose prices are %d and %d.\n\n", x, y);*/
        /*for (i = 0; i < num_of_book -1; i++){
            for (j = i+1; j < num_of_book; j++){
                sum = book[i] + book[j];
                if (sum == ptr_money){
                    tmp_1 = i++;
                    tmp_2 = j--;
                }
                else if (sum < ptr_money) ++i;
                else --j;
            }
        }*/
        //printf ("Peter should buy books whose prices are %d and %d.\n\n", book[tmp_1], book[tmp_2]);
    }
    return 0;
}
