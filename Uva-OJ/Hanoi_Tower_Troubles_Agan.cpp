#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stack>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 100

int peg[MAX], ans[MAX], tmp[MAX];
//stack <int> last_peg;

bool is_square(const int x) {
    int y = sqrt(x);
    return y * y == x;
}

int main(){
    int t, n, c=0, i, j, ball = 1, size = 0;
    while(1){
        bool flag = false;
        for (i = 0; i < size; i++)
            if (is_square(ball + peg[i])){
                peg[i] = ball;
                tmp[i] = ball++;
                flag = true; break;
            }
            if (flag == false){
                peg[size] = ball;
                ans[size++] = ball++;
                if (size > 50) break;
            }
    }
    scanf ("%d", &t);
    while (t--){
        scanf ("%d", &n);
        printf ("%d\n", ans[n]-1);
    }
    return 0;
}

// Another Way
/*int t, m;
int ans[] = {1,3,7,11,17,23,31,39,49,59,71,83,97,111,
127,143,161,179,199,219,241,263,287,311,337,363,
391,419,449,479,511,543,577,611,647,683,721,759,
799,839,881,923,967,1011,1057,1103,1151,1199,1249,1299};
int main(void){
    scanf("%u",&t);
    while(t--)
        scanf("%u",&m),
        printf("%u\n",ans[m-1]);
}*/
