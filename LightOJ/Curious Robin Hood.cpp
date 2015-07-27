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
#define pb push_back
#define MAX 100000
#define row 100
#define col 100
#define eps 1e9

int arr[MAX], tree[MAX*4];

void push_korlam(int node, int left, int right){
    if(tree[left] > tree[right]) tree[node] = tree[right];
    else tree[node] = tree[left];
    //tree[node] = tree[left] + tree[right];
}

void segmant_tree (int node, int begin, int end){
    int left, right, mid;
    if (begin == end){
        tree[node] = arr[begin];
        return;
    }
    left = node*2; right = (node*2) + 1;
    mid = (begin+end) / 2;
    segmant_tree(left, begin, mid);
    segmant_tree(right, mid+1, end);
    push_korlam(node, left, right);
}

int query (int node, int begin, int end, int tk){
    int left, right, mid, amount;
    if (begin == end){
        amount = tree[node];
        tree[node] = 0;
        return amount;
    }
    left = node*2; right = (node*2) + 1;
    mid = (begin+end) / 2;
    if (tk <= mid) amount = query(left, begin, mid, tk);
    else amount = query(right, mid+1, end, tk);
    push_korlam(node, left, right);
    return amount;
}

int query_ragne (int node, int begin, int end, int x, int y){
    int left, right, mid, p1, p2;
    if (x > end || y < begin) return 0;
    if (begin >= x && end <= y) return tree[node];
    left = node*2; right = (node*2) + 1;
    mid = (begin+end) / 2;
    p1 = query_ragne(left, begin, mid, x, y);
    p2 = query_ragne(right, mid+1, end, x, y);
    return (p1+p2);
}

void update (int node, int begin, int end, int ind, int val){
    int left, right, mid;
    if (begin == end){
        tree[node] += val;
        return;
    }
    left = node*2; right = (node*2) + 1;
    mid = (begin+end) / 2;
    if (ind <= mid) update(left, begin, mid, ind, val);
    else update(right, mid+1, end, ind, val);
    return;
}


int main(){
    int tc, cs=1, k, n, q, ans, tmp, cnt;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d%d", &n, &q);
        for (k = 1; k <= n; k++) scanf ("%d", &arr[k]);
        segmant_tree(1, 1, n);
        memset (tree, 0, sizeof (tree));
        printf ("Case %d:\n", cs++);
        while (q--){
            int m, indx, money, v, i, j;
            scanf ("%d", &m);
            if (m == 1){
                scanf ("%d", &money);
                ans = query(1, 1, n, money);
                printf ("%d\n", ans);
            }
            if (m == 2){
                scanf ("%d%d", &indx, &v);
                update(1, 1, n, indx, v);
            }
            if (m == 3){
                scanf ("%d%d", &i, &j);
                ans = query_ragne(1, 1, n, i, j);
                printf ("%d\n", ans);
            }
        }
    }
    return 0;
}
