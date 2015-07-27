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
#define memo(array, value) memset(array, value, sizeof(array))
#define MAX 200020

int arr[MAX], tree[MAX*4], n;

void push_korlam(int node, int left, int right){
    //if(tree[left] > tree[right]) tree[node] = tree[right];
    //else tree[node] = tree[left];
    tree[node] = tree[left] + tree[right];
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

void update(int node, int begin, int end, int p, int val){
    int left, right, mid;
    if (begin == end){
        tree[node] = val;
        return;
    }
    left = node*2; right = (node*2) + 1;
    mid = (begin+end) / 2;
    if (p <= mid) update(left, begin, mid, p, val);
    else update(right, mid+1, end, p, val);
    push_korlam(node, left, right);
}

int quary (int node, int begin, int end, int a, int b){
    int left, right, mid, p1, p2, sum = 0;
    //if (a > end || b < begin) return 0;
    if (begin >= a && end <= b) return tree[node];
    left = node*2; right = (node*2) + 1;
    mid = (begin+end) / 2;
    if (a <= mid) sum += quary(left, begin, mid, a, b);
    if (b > mid) sum += quary(right, mid+1, end, a, b);
//    p1 = quary(left, begin, mid, a, b);
//    p2 = quary(right, mid+1, end, a, b);
    return sum;
}

int main(){
    int x, y, cs=1, i, j, ans, tmp, cnt;
    char ch[10];
    while (scanf ("%d", &n) == 1 && n){
        if (cs != 1) puts ("");
            printf ("Case %d:\n", cs++);
        memo (tree, 0);
        for (i = 1; i <= n; i++) scanf ("%d", &arr[i]);
        segmant_tree(1, 1, n);
        while (scanf ("%s", ch), strcmp("END", ch)){
            scanf ("%d%d", &x, &y);
            if (ch[0] == 'S') update(1, 1, n, x, y);
            else{
                ans = quary(1, 1, n, x, y);
                printf ("%d\n", ans);
            }
        }
    }
    return 0;
}
