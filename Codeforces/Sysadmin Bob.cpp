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

#define LLI long long int
#define ULL unsigned long long int
#define MAX 105
#define row 100
#define col 100
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)


void print_koro(){
    puts ("No solution");
    //return 0;
}



int main(){
    int n, len, i, j, div, tmp;
   // char address[MAX];
    string address;
    vector <int> vt;
    //scanf ("%s", address);
    cin >> address;
    int add = 0, diff, ln;
    //len = strlen (address);
    len = address.length();

    for (i = 0; i < len; i++){
        if (address[i] == '@'){
            //add++;
            vt.pb(i);

        }
    }

    //diff = abs(len - add);
    //div = diff / 2;
    ln = vt.size();
  //  printf ("Ln = %d\n", ln);

    if (address[0] == '@' || address[len-1] == '@'){
        print_koro();
        return 0;
    }
    else if (ln == 0){
        print_koro();
        return 0;
    }
    else{
        for (i = 1; i < ln; i++){
           // printf ("%d\n", vt[i]);
            if (vt[i] - vt[i-1] <= 2){
                print_koro();
                return 0;
            }
            else{
                address.insert (vt[i-1]+i+1, ",");
            }
        }
        cout << address << endl;
    }
//    if (diff % add == 0 && div == add){
//        for (i = 0; i < len; i++){
//
//            //printf ("%c", address[i]);
//            address += address[i];
//            if (address[i] == '@'){
//               // printf ("%c,", address[i+1]);
//               // printf (",");
//               address.insert (address[i+1], ",");
//                //address += address[i+1];
//
//            }
//        }
//        //NL;
//        cout << address << endl;
//    }
//    else
//        puts ("No solution");
    return 0;
}

