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
#define row 11
#define col 11
#define MAX 10006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 7477777


bool check_NM (double len, double hei, double thik){
    if (len < 125 || hei < 90 || thik < 0.25)
        return false;

    return true;
}

bool check_letter (double len, double hei, double thik){
    if (len <= 290 && hei <= 155 && thik <= 7)
        return true;

    return false;
}


bool check_packet (double len, double hei, double thik){
    if (len <= 380 && hei <= 300 && thik <= 50)
        return true;

    return false;
}

bool check_parcel (double len, double hei, double thik){
    if (2 * (hei + thik) + len  <= 2100)
        return true;

    return false;
}


void check_koro (double len, double hei, double thik){
    if (!check_NM (len, hei, thik))
      puts ("not mailable");

     else if (check_letter (len, hei, thik) )
            puts ("letter");

    else if (check_packet (len, hei, thik) )
            puts ("packet");

    else if (check_parcel (len, hei, thik) )
            puts ("parcel");
    else
        puts ("not mailable");
}





int main(){
    double arr[row];
    int i;

    while (1){
        for (i = 0; i < 3; i++)
            scanf ("%lf", &arr[i]);

        if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0)  break;

        sort (arr, arr + 3);


        check_koro (arr[2], arr[1], arr[0]);
        //cout << check_koro ( arr[2], arr[1], arr[0] ) << endl;

    }

    return 0;
}


/*string check_koro (double len, double hei, double thik){
    if (!check_NM (len, hei, thik))
        return "not mailable";

    else if (check_letter (len, hei, thik) )
        return "letter";

    else if (check_packet (len, hei, thik) )
        return "packet";

    else if (check_parcel (len, hei, thik) )
        return "parcel";
    else
        return "not mailable";
}

//        if (!check_NM (arr[2], arr[1], arr[0]))
//            puts ("not mailable");
//        else if (check_letter (arr[2], arr[1], arr[0]) )
//            puts ("letter");
//        else if (check_letter (arr[2], arr[1], arr[0]) )
//            puts ("packet");
//        else if (check_letter (arr[2], arr[1], arr[0]) )
//            puts ("parcel");
//        else
//            puts ("not mailable");





*/
