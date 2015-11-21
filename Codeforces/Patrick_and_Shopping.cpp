#include <bits/stdc++.h>

using namespace std;

#define MAX 10000
#define row 100
#define col 100
#define NL puts("")
#define LLI __int64


int main (){
    LLI  d1, d2, d3, way_1, way_2, way_3, way_4, ans;
    
    scanf ("%I64d %I64d %I64d", &d1, &d2, &d3);
    
    way_1 = ( d1 + d1 ) + ( d2 + d2 );
    way_2 = d1 + d2 + d3;
    way_3 = ( d1 + d1 ) + ( d3 + d3 );
    way_4 = ( d2 + d2 ) + ( d3 + d3 );
    
    //ans = min (way_1, way_2);
    
    ans = min ( min ( way_1, way_2 ), min ( way_3, way_4 ) );
    
    printf ("%I64d\n", ans);
    return 0;
}
