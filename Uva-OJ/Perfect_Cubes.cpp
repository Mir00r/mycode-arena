#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define MAX 200

int main(){
    int a, b, c, d, i, j, k, m, n, o, p, cnt, tmp, ans;
    for (a = 2; a <= MAX; a++){
        //m = pow (a, 3);
        m = a*a*a;
        for (b = 2; b <= MAX; b++){
            //n = pow (b, 3);
            n = b*b*b;
            if (m < n) break;
            for (c = b; c <= MAX; c++){
                //o = pow (c, 3);
                o = c*c*c;
                if (m < n + o) break;
                for (d = c; d <= MAX; d++){
                    //p = pow (d, 3);
                    p = d*d*d;
                    if (m < n + o + p) break;
                    if(m == n + o + p) printf("Cube = %d, Triple = (%d,%d,%d)\n", a, b, c, d);
                }
            }
        }
    }
    return 0;
}
