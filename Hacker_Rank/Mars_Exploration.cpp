#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;



int main(){
    char str[1000], store[1000];
    int i, j, len, cnt = 0, ans = 0, tmp, mod, diff, div;

    scanf ("%s", str);
    len = strlen (str);
    div = len / 3;
    //printf ("%d\n", mod);

    for ( i = 0; i < div; i++ )
        for ( j = 0; j < 3; j++){
            if ( j == 1 )
                store[cnt++] = 'O';
//            else if ( j == 1 )
//                store[cnt++] += 'O';
            else
                store[cnt++] = 'S';
        }


//    for ( i = 0; i < cnt; i++)
//        printf ("%c", store[i] );

    for ( i = 0; i < len; i++ )
        if ( str[i] != store[i] )
            ans++;

    printf ("%d\n", ans);
    return 0;
}
