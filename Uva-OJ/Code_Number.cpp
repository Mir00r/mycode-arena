#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 100+10

int main(){
    int t, i, j, ans;
    char str;
    scanf ("%d\n", &t);
    while((str = getchar()) != EOF){
       // getchar();
        if (str == '0') printf ("O");
        else if (str == '1') printf ("I");
        else if (str == '2') printf ("Z");
        else if (str == '3') printf ("E");
        else if (str == '4') printf ("A");
        else if (str == '5') printf ("S");
        else if (str == '6') printf ("G");
        else if (str == '7') printf ("T");
        else if (str == '8') printf ("B");
        else if (str == '9') printf ("P");
        else printf ("%c", str);
       // printf("\n");
    }
    return 0;
}
