#include <bits/stdc++.h>

using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define LLU long long unsigned
#define row 205
#define col 205
#define MAX 100006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 7477777
#define PI 3.1415926535897932384626433832795




int main (){
    int n, q, i, Size[MAX];
    int r, c, x, y, opa, lastans = 0, ans = 0, indx = 0;
    int *arr[MAX];


    scanf ("%d %d", &n, &q);

    //memo (Size, 0);
    //memo (arr, 0);
    vector <int> seq[2 * q];

//    for ( i = 0; i < n; i++){
//        arr[i] = (int *)malloc(sizeof(int)*q);
//        Size[i] = 0;
//    }


    for ( i = 0; i < q; i++ ){
        scanf ("%d %d %d", &opa, &x, &y);

        //indx = ( x ^ lastans ) % n;
        if ( opa == 1 ){
            r = ( x ^ lastans ) % n;
            //c = Size[r]++;
  //          printf ("Opa-> 1    R = %d  C = %d\n", r, c);
         //   arr[ r ][ c ] = y;

            //c = seq[r].size();
            //seq[ r ][ c ] = y;
            seq[r].pb(y);
        }
        else if ( opa == 2 ){
            r = ( x ^ lastans ) % n;
            //c = y % Size[r];
              c = y % seq[r].size();
//            printf ("Opa-> 2    R = %d  C = %d\n", r, c);
            ans = seq[ r ][ c ];
            printf ("%d\n", ans);
            lastans = ans;
        }
    }
    return 0;
}
