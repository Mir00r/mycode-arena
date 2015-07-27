#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 9999
#define eps 1e-11

int main(){
    int num_of_road, name, i, cs=1, tmp, ans, flag;
    while (scanf ("%d%d", &num_of_road, &name) == 2 && num_of_road && name){
        flag = 0;
        for (i = 1; i <= 27; i++){
            if (name*i >= num_of_road){
                printf ("Case %d: %d\n", cs++, i-1);
                flag = 1;
                break;
            }
        }
        if (flag == 0) printf ("Case %d: impossible\n", cs++);
    }
    return 0;
}
