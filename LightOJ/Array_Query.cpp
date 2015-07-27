#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <queue>
#include <stack>
#include <vector>
#include <list>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define MAX 100000
#define memo(array, value) memset(array, value, sizeof(array))
#define eps 1e9

int tree[MAX*4];
int arr[MAX];

void inisialize_korlam(int node, int begin, int end){
    int left, right, mid;
    if (begin == end){
        tree[node] = arr[begin];
        return;
    }
    left = node*2; right = (node*2)+1;
    mid = (begin+end) / 2;
    inisialize_korlam(left, begin, mid);
    inisialize_korlam(right, mid+1, end);
    //tree[node] = tree[left] + tree[right];
    if(tree[left] > tree[right]) tree[node] = tree[right];
    else tree[node] = tree[left];
}

int query(int node, int begin, int end, int x, int y){
    int left, right, mid, par_1, par_2;
    if (x > end || y < begin) return eps;
    if (begin >= x && end <= y) return tree[node];
    left = node*2;
    right = (node*2) + 1;
    mid = (begin+end) / 2;
    par_1 = par_2 = eps;
    par_1 = query(left, begin, mid, x, y);
    par_2 = query(right, mid+1, end, x, y);
    return min (par_1, par_2);
}

int main(){
    int tc, cs=1, i, j, k, n, q, ans, tmp, cnt;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d%d", &n, &q);
        memo (tree, 0);
        for (k = 1; k <= n; k++) scanf ("%d", &arr[k]);
        inisialize_korlam(1, 1, n);
        printf("Case %d:\n", cs++);
        for (k = 1; k <= q; k++){
            scanf ("%d%d", &i, &j);
            ans = query(1, 1, n, i, j);
            printf ("%d\n", ans);
        }
        //printf ("Case %d: %d\n", cs++, ans);
    }
    return 0;
}
