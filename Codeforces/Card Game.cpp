#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <queue>
#include <stack>
#include <vector>
#include <list>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define ULL unsigned long long int
#define MAX 5
#define row 100
#define col 100
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)

/*int rank (char *ch){
    int len,tot=1,i, num;
    len = strlen (ch);
   // printf ("Len = %d\n", len);
    for (i = 0; i < len; i++){
        if (ch[i] >= '1' && ch[i] <= '9'){
            num = atoi (ch);
            tot *= num;
        }
        else if (ch[i] == 'S')
            tot *= 6;
        else if (ch[i] == 'H')
            tot *= 7;
        else if (ch[i] == 'D'){
            tot *= 8;
        }
        else if (ch[i] == 'C')
            tot *= 9;
        else if (ch[i] == 'T'){
            tot *= 10;
        }
        else if (ch[i] == 'J')
            tot *= 11;
        else if (ch[i] == 'Q')
            tot *= 12;
        else if (ch[i] == 'K')
            tot *= 13;
        else if (ch[i] == 'A')
            tot *= 14;
    }

    return tot;
}*/


int print_koro(){
    puts ("YES");
    return 0;
}

int print_korbo_na(){
    puts ("NO");
    return 0;
}



int main(){
    //char trump[MAX], fast[MAX], secd[MAX], a, b;
    string trump, fast, secd, card;
    //scanf ("%s %s %s", trump, fast, secd);

    card = "6789TJQKA";

    cin >> trump >> fast >> secd;

    if ( ( (trump[0] == fast[1])  && (trump[0] != secd[1]) ))
        print_koro();
    else if ((fast[1] == secd[1]) && (card.find (fast[0])  >  card.find (secd[0]) ) )
        print_koro ();
    else
        print_korbo_na();


    /*if ( (trump[0] == fast[1]) && (trump[0] != secd[1])  ){
        print_koro();
    }
    else if ( trump[0] == secd[1]  && ((trump[0] != fast[1])) ){
        print_korbo_na();
    }
    else{
        a = rank(fast);
        b = rank(secd);
       // printf ("%d %d\n", a, b);

        if (a > b){
                print_koro();
        }
        else{
            print_korbo_na();
        }
    }*/
    return 0;
}







    /*if ( (trump[0] == fast[1])  && (trump[0] != secd[1]) ){
        print_koro();
    }
    else if ( (trump[0] != fast[1])  && (trump[0] == secd[1]) ){
        print_korbo_na();
    }
    else if ( (trump[0] == secd[1]) && (trump[0] == fast[1]) ){
        a = rank(fast);
        b = rank(secd);
       // printf ("%d %d\n", a, b);
        if (a > b){
            print_koro();
        }
        else{
            print_korbo_na();
        }
    }
    else if ( (fast[1] == secd[1]) && (trump[0] != fast[1]) && (trump[0] != secd[1]) ){
       // print_koro();
        a = rank(fast);
        b = rank(secd);
       // printf ("%d %d\n", a, b);
        if (a > b){
            print_koro();
        }
        else{
            print_korbo_na();
        }

    }
    else if (fast[1] != secd[1]){
        a = rank(fast);
        b = rank(secd);
       // printf ("%d %d\n", a, b);
        if (a > b){
            print_koro();
        }
        else{
            print_korbo_na();
        }
    }
    else{
        print_korbo_na();
    }*/
