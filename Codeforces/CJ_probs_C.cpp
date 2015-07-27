#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 99999

int check_palindrom(int x);

int check_palindrom(int x){
    int tmp, rev = 0;
    while (x > 0){
        rev *= 10;
        rev += x % 10;
        x /= 10;
    }
    if (rev == x)
        return rev;
}

int main (){
    //#ifdef localhost
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    //#endif

    int t, a, b, c=0, i, j, k, root_a, root_b, tmp_root, tmp_a, tmp_b, pd;
    scanf ("%d", &t);
    while (t--){
        int count = 0;
        scanf ("%d%d", &a, &b);
        //root_b = sqrt(b);
        for (i = a; i <= b; i++){
           //tmp_root = sqrt(i);
           pd = check_palindrom(i);
            if (i == pd){
                tmp_root = sqrt(i);
                if (tmp_root * tmp_root == i){
                    pd = check_palindrom(tmp_root);
                    if (tmp_root == pd)
                        count++;
                }
            }
        }
        printf ("Case %d: %d\n", ++c, count);
    }
    return 0;
}

