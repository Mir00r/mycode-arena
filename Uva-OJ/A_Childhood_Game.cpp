#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define MAX 99999

int main(){
    int tc, cs=1, n, i, j, ans, cnt, tmp;
    char ch[MAX];
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d %s", &n, &ch);
        //gets (ch);
        if (ch[0] == 'A'){
            //puts ("Odd");
            //if (n % 3 == 0) printf ("Case %d: Bob\n",cs++);
            if (n % 3 == 1) printf ("Case %d: Bob\n", cs++);
            else printf ("Case %d: Alice\n", cs++);
        }else{
            //puts ("Even");
            //if (n % 3 == 0) printf ("Case %d: Alice\n",cs++);
            if (n % 3) printf ("Case %d: Bob\n", cs++);
            else printf ("Case %d: Alice\n", cs++);
        }
    }
    return 0;
}
