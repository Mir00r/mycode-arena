#include <bits/stdc++.h>

using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define LLU long long unsigned
#define row 105
#define col 105
#define MAX 100000 + 5
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define MOD 7477777
#define PI 3.1415926535897932384626433832795
#define PrimeRange 1000000
#define CharRange 255


struct person{
    //string name[row];
    char name[10];
};

struct person per[20];
struct person nam;


int main () {
    int n, i, indx;
    char str[10];

//    nam.name = "ram";
//    per[0] = nam;
//
//    nam.name = "sam";
//    per[1] = nam;
//
//    nam.name = "jodu";
//    per[2] = nam;
//
//    nam.name = "modu";
//    per[3] = nam;
//
//    scanf ("%d", &indx);

    //for (i = 0; i < 4; i++ )
//     printf("%s\n", per[indx].name );

    scanf ("%d", &n);
    for ( i = 0; i < n; i++ ) {
        scanf ("%s", nam.name );
        //nam.name = str;
        per[i] = nam;
    }

    for ( i = 0; i < n; i++ )
        printf("%s\n", per[i].name );

    return 0;
}
