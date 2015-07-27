#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <set>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define LLU long long unsigned
#define row 32
#define col 32
#define MAX 10006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
//#define mod 7477777


//char eng_num[row][col] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
//                    "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen",
//                    "nineteen", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"
//                 };


void num_1 (int x){
    if (x == 0)
        puts ("zero");
    else if (x == 1)
        puts ("one");
    else if (x == 2)
        puts ("two");
    else if (x == 3)
        puts ("three");
    else if (x == 4)
        puts ("four");
    else if (x == 5)
        puts ("five");
    else if (x == 6)
        puts ("six");
    else if (x == 7)
        puts ("seven");
    else if (x == 8)
        puts ("eight");
    else if (x == 9)
        puts ("nine");
    else if (x == 10)
        puts ("ten");

}


void num_2 (int x){
    if (x == 11)
        puts ("eleven");
    else if (x == 12)
        puts ("twelve");
    else if (x == 13)
        puts ("thirteen");
    else if (x == 14)
        puts ("fourteen");
    else if (x == 15)
        puts ("fifteen");
    else if (x == 16)
        puts ("sixteen");
    else if (x == 17)
        puts ("seventeen");
    else if (x == 18)
        puts ("eighteen");
    else if (x == 19)
        puts ("nineteen");
    else if (x == 20)
        puts ("twenty");

}

void num_3 (int x){
    if (x == 2)
        printf ("twenty");
    else if (x == 3)
        printf ("thirty");
    else if (x == 4)
        printf ("forty");
    else if (x == 5)
        printf ("fifty");
    else if (x == 6)
        printf ("sixty");
    else if (x == 7)
        printf ("seventy");
    else if (x == 8)
        printf ("eighty");
    else
        printf ("ninety");
}


int divid (int v){
    int x;
    x = v / 10;
    return x;
}


int mod (int v){
    int x;
    x = v % 10;
    return x;
}

int main(){
    int n, j, i, ans, a, b;
    scanf ("%d", &n);

    if (0 >= n || n <= 10)
        num_1 (n);
    else if (11 >= n || n <= 20)
        num_2 (n);
    else{
        //printf ("%d\n", divid (n));
        //printf ("%d\n", mod (n));

        a = divid (n);
        b = mod (n);
        if (b > 0){
            num_3 (a);
            printf ("-");
            num_1 (b);
        }
        else
            num_3 (a);
    }

    return 0;
}
