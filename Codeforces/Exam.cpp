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
#define row 205
#define col 205
#define MAX 10006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 7477777


//void print_arr(int j, int n){
//    if (j <= n){
//        //if (abs (j - n) != 1)
//            printf ("%d %d ", j, n);
//        print_arr(j+1, n-1);
//    }
//    NL;
//}

int n;
vector <int> vt;

void odd (){
    int i;
    for (i = 1; i <= n; i++)
        if (i % 2 != 0)
            vt.pb(i);
}


void even (){
    int i;
    for (i = 1; i <= n; i++)
        if (i % 2 == 0)
            vt.pb(i);
}


int main(){
    int i, j, len, ans;
    scanf ("%d", &n);

    if (n == 1 || n == 2)
        printf ("1\n1");
    else if (n == 3)
            printf ("2\n1 3");
    else if (n == 4)
        printf ("4\n2 4 1 3");
    else{
        odd ();
        even ();

        len = vt.size ();

        printf ("%d\n", len);

        for (i = 0; i < len; i++)
            printf ("%d ", vt[i]);
    }
    NL;
    return 0;
}




/*
int main(){
        int n, i;
        scanf ("%d", &n);
        //int a = 1;
        //int b = n-1;
        //print_arr(1, n-1);
       // NL;
//       printf ("%d %d ", a, b);
        int a, b;
        if (n == 1 || n == 2)
            printf ("1\n1");
        else if (n == 4 || n == 3)
            printf ("2\n1 3");
        else{
            if (n % 2 == 0){
                printf ("%d\n", n);
                printf ("1 %d ", n-1);
                for (i = 2; i <= n/2; i++){
                    if (i % 2 != 0)
                        printf ("%d %d ", i-1, (i-1) * 2);
                    else{
                        a = i+1;
                        b = (i+1) * 2;
//                        if (b <= n)
//                            b = b;
//                        else
//                            b = n;
                        printf ("%d %d ", a, b);
                    }
                }
            }
            else{
                //printf ("1 %d ", n);
                printf ("%d\n", n-1);
                for (i = 1; i <= n/2; i++){
    //                if (i % 2 != 0)
                        printf ("%d %d ", i, n-i+1);
    //                else
    //                    printf ("%d %d ", i, n-i+1);
                }
            }
        }
        NL;
    return 0;
}
*/
