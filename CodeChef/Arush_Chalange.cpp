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
#define MAX 100006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
//#define mod 7477777

vector <LLI> vt;

void res (LLI x){
    if (x == 2){
        //puts ("2");
        vt.pb (2);
    }
    else if (x == 3){
        //puts ("3");
        vt.pb (3);
    }
    else if (x == 4){
       // puts ("322");
        vt.pb (2);
        vt.pb (2);
        vt.pb (2);
    }
    else if (x == 5){
        //puts ("5");
        vt.pb (5);
    }
    else if (x == 6){
        //puts ("53");
        vt.pb (3);
        vt.pb (5);
    }
    else if (x == 7){
      //  puts ("7");
        vt.pb (7);
    }
    else if (x == 8){
       // puts ("7222");
       vt.pb (2);
       vt.pb (2);
       vt.pb (2);
       vt.pb (7);

    }
    else if (x == 9){
     //   puts ("7332");
        vt.pb (2);
        vt.pb (3);
        vt.pb (3);
        vt.pb (7);

    }

    return;
}


void digit_cnt (LLI y){
    LLI div, mod, tmp;

    tmp = y;
    while (tmp > 0){
        mod = tmp % 10;
        tmp /= 10;
        res (mod);
    }
}


int main(){
    int i, j, tc, len;
    LLI n, d;
    char num[20];
    scanf ("%d", &tc);

    while (tc--){
        vt.clear ();

        scanf ("%lld", &d);
       // scanf ("%s", num);
        scanf ("%lld", &n);

        digit_cnt (n);

        //len = strlen (num);
//        n = 0;
//        for (i = 0; i < d; i++){
//            //n += num[i] - '0';
//            n = num[i] - '0';
//            res (n);
//        }

        //res (n);

        sort (vt.begin (), vt.end() );
        for (i = vt.size ()-1; i >= 0 ; i--)
            cout << vt[i];
        NL;

        //vt.clear ();
    }

    return 0;
}




/*
vector <lld> v;

void push(lld n){
    if(n==2){
        v.push_back(2);
    }
    else if(n==3){
        v.push_back(3);
    }
    else if(n==4){
        v.push_back(2);
        v.push_back(2);
        v.push_back(3);
    }
    else if(n==5){
        v.push_back(5);
    }
    else if(n==6){
        v.push_back(3);
        v.push_back(5);
    }
    else if(n==7){
        v.push_back(7);
    }
    else if(n==8){
        v.push_back(2);
        v.push_back(2);
        v.push_back(2);
        v.push_back(7);
    }
    else if(n==9){
        v.push_back(2);
        v.push_back(3);
        v.push_back(3);
        v.push_back(7);
    }
    return;
}

int main(){

//    #ifdef howcow
//    freopen("input.txt", "r", stdin);
////    freopen("vomit.txt", "w", stdout);
//    #endif

    lld i, j, k, test, kase = 0;
    lld n;
    cin >> test;
    while(test--){
        v.clear();
        cin >> n;
        cin >> k;

        while(k>0){
            j = k%10;
            k/=10;
            push(j);
        }

        sort(v.begin(), v.end());
        for( i=v.size()-1 ; i>=0 ; i-- ) cout << v[i];
        cout << endl;
    }


    return 0;
}

*/
