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
#define MAX 100000
#define row 100
#define col 100
#define eps 1e9
#define memo (array, value) memset (array, value, sizeof (array))

int arr[MAX];

struct info{
    int prop, sum;
}tree[MAX*4];

void push_korlam (int node, int left, int right){
    //if(tree[left] > tree[right]) tree[node] = tree[right];
    //else tree[node] = tree[left];
    tree[node] = tree[left] + tree[right];
}

void segmant_tree(int node, int begin, int end){
    int left, right, mid;
    if (begin == end){
        tree[node] = arr[begin];
        return;
    }
    left = node*2;
    right = (node*2) + 1;
    mid = (begin+end) / 2;

    segmant_tree(left, begin, mid);
    segmant_tree(right, mid+1, end);

    push_korlam (node, left, right);
}

void update(int node, int begin, int end, int a, int b, int val){
    int left, right, mid, node_ase;
    node_ase = end - begin + 1;
    if (a > end || b < begin) return;
    if (begin >= a && end <= b){
        tree[node].sum += (node_ase*val); // niche node ase (end - begin + 1) tai bar bar val add hob a ai range a
        tree[node].prop += val;   // nicher node gulor shath a "val" add hob a
        return;
    }

    left = node*2;
    right = (node*2) + 1;
    mid = (begin+end) / 2;

    update (left, begin, mid, a, b, val);
    update (right, mid+1, end, a, b, val);

    tree[node].sum = tree[left].sum + tree[right].sum + node_ase*tree[node].prop

    // upore uthar shomoy pother shob gula node update hoiya jab a
    // left and right value charao jog hob a nicher extra jog houya value
}

int quary (int node, int begin, int end, int a, int b, int carry){
    int left, right, mid, carry = 0, p1, p2;
    int node_ase = end - begin + 1;

    if (a > end || b < begin) return 0;
    if (begin >= a && end <= b)
        return tree[node].sum + carry * node_ase;

    left = node*2;
    right = (node*2) + 1;
    mid = (begin+end) / 2;

    p1 = quary (left, begin, mid, a, b, carry+tree[node].prop); // propagate value nia jaitese carry variable ti
    p2 = quary (right, mid+1, end, a, b, carry+tree[node].prop);

    return p1+p2;
}

int main(){
    int tc, cs=1, n, q, i, j, ans, x, y, qur;
    scanf ("%d", &tc);
    while (tc--){
        memo (tree, 0);
        printf ("Case %d:\n", cs++);
        scanf ("%d %d", &n, &q);
        //memo (tree, 0);
        segmant_tree(1, 1, n);

        while (q--){
            scanf ("%d", &qur);
            if (qur == 0){
                scanf ("%d %d %d", &x, &y, &val);
                update (1, 1, n, x, y, val);
            }
            if (qur == 1){
                scanf ("%d %d", &x, &y);
                ans = quary (1, 1, n, x, y, 0);
                printf ("%d\n", ans);
            }
        }
    }
    return 0;
}
