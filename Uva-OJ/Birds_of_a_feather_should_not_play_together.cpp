#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <math.h>
#include <deque>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define MAX 100
#define row 50
#define col 50


const int N = 500005;
int a[N];

int main() {
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    deque <pair <int, int> > window;

    for (int i = 0; i < n; i++) {
        // from the back of deque, if the value of last element is greater or equal than a[i]
        // then keep poping the elements.
        // Invariant : deque always remains sorted.
        // Important property due to which this trick works, is that the popped numbers are useless
        // in the next iteration as they are not longer can affect minimum.

        while (!window.empty() && window.back().first <= a[i]) {
            window.pop_back();
        }
        window.push_back (make_pair (a[i], i));

        // Now from the front of deque, pop all the elements which were out of our window.

        while (!window.empty() && window.front().second <= i - k) {
            window.pop_front();
        }

        if (i >= k - 1)
            cout << window.front().first << " ";
    }

    return 0;
}



/*string name[MAX],

int main(){
    int n, tc, cs =1, len, i, j, k, tmp, ans, maxn, minx, check;
    char name, word[MAX];
    while (scanf ("%d", &n) == 1){
        if (n == 0) break;
        for (i = 0; i < n; i++)
    }
    return 0;
}
*/
