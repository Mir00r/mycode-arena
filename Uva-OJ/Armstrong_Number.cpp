#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sstream>
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
#define MAX 100005
#define row 70
#define col 70
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define eps 0.000000001



LLI len_find (LLI x){
    LLI ln = 0;
    while (x != 0){
        ln++;
        x /= 10;
    }
    return ln;
}


int main(){
    int tc, i, j;
    LLI len, num, div, mod, diff, ans, tmp, cnt, sum, n;
    char str[MAX], digi[MAX];
    scanf ("%d", &tc);

    while (tc--){
        scanf ("%lld", &n);
        len = len_find(n);
       // printf ("len = %lld\n", len);
        tmp = n;
        sum = 0;
        for (i = 0; i < len; i++){
            mod = tmp % 10;
            tmp /= 10;
            //printf ("Mod = %lld\n", mod);
            sum += pow (mod, len);
        }
       // printf ("%lld\n", sum);
       diff = tmp - sum;
       printf ("%lld\n",diff);

        if (sum == tmp)
            puts ("Armstrong");
        else
            puts ("Not Armstrong");

    }

    return 0;
}



/*
while (tc--){
        scanf ("%s", str);
        len = strlen (str);
        num = atoi (str);

        //printf ("Num = %d\n", num);
        sum = tmp = cnt = 0;

        for (i = 0; i < len; i++){
            mod = num % 10;
            num /= 10;
            //printf ("%d\n", mod);
            sum += pow (mod, len);
        }
       // printf ("%d\n", sum);

        itoa (sum, digi, 10);
       // printf ("%s\n", digi);

        if (strcmp (str, digi) == 0)
            puts ("Armstrong");
        else
            puts ("Not Armstrong");

    }



*/




/*

//string tostring (int n){
//    stringstream ss;
//    ss << n;
//    return ss.str();
//}


    //string str, digi;
            //cin >> str;

    //len = str.length();
            //num = std::stoi (str);
                //digi = tostring(sum);


*/
