#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <set>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

#define L long int
#define LL long long int
#define ULL unsigned long long
#define MAX 999999
#define row 100
#define col 100
#define eps 1e-9
#define Pi 3.1415926535897932384626433832795
#define pi 3.14159

int bank_note(int x, int note){
    int note_cnt = 0;
    while (x >= note){
        note_cnt++;
        x -= note;
    }
    printf ("%d nota(s) de R$ %d,00\n", note_cnt, note);
    return x;
}

int main(){
    int n, cnt, tmp;
    scanf ("%d", &n);
    printf ("%d\n", n);
    n = bank_note(n, 100);
    n = bank_note(n, 50);
    n = bank_note(n, 20);
    n = bank_note(n, 10);
    n = bank_note(n, 5);
    n = bank_note(n, 2);
    n = bank_note(n, 1);
    return 0;
}


