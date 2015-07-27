#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define MAX 100000
#define row 100
#define col 100

int arr[MAX], tree[MAX];

void inisialize_korlam (int node, int begin, int end){
    int left, right, mid;
    if (begin == end){
        tree[node] = arr[begin];
        return;
    }
    left = 2*node; // parent er left child ber korlam
    right = (2*node) + 1; // parent er right child ber korlam
    mid = (left+right) / 2; // Divide korlam
    inisialize_korlam(left, begin, mid); // left child k conqure korlam & segmant make korlam
    inisialize_korlam(right, mid+1, end); // right child k conqure korlam & segmant make korlam
    tree[node] = tree[left] + tree[right];
}

int query (int node, int begin, int end, int x, int y){
    int left, right, mid, par_1, par_2;
    if (x > end || y < begin) return 0; // segmant er baire choila gese...
    if (begin >= x && end <= y) return tree[node]; // current segmant puratai x & y er maj a ase Relavent segmant hishabe ase
    left = 2*node; // aibar aro child or leaf a vangte hob a a
    right = (2*node) + 1;
    mid = (left+right) / 2;
    par_1 = query(left, begin, mid, x, y);
    par_2 = query(right, mid+1, end, x, y);
    return (par_1 + par_2); // left & right er 2ta parent sum koira send kor a dilam
}

void change (int node, int begin, int end, int x, int notun_value){
    int left, right, mid, par_1, par_2;
    if (x > end || x < begin) return; // segmant er baire choila gese...
    if (begin >= x && end <= x){
        tree[node] = notun_value; // current segmant puratai x & y er maj a ase Relavent segmant hishabe ase
        return;
    }
    left = 2*node; // aibar aro child or leaf a vangte hob a a
    right = (2*node) + 1;
    mid = (left+right) / 2;
    change (left, begin, mid, x, notun_value);
    change (right, mid+1, end, x, notun_value);
    tree[node] = tree[left] + tree[right];
}



int main(){
    int tc, cs=1, n, i, j, ans, tmp, cnt;
    while (scanf ("%d", &n) == 1){
        for (i = 1; i <= n; i++) scanf ("%d", &arr[i]);
        inisialize_korlam(1, 1, n);
        printf ("%d\n", query(1, 1, n, 1, 3));
        change(1, 1, n, 2, 2);
        printf ("%d\n", query(1, 1, n, 2, 2));
    }
    return 0;
}
