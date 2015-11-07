#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define MAX 100000+10

int main(){

    long long int t, i, sum = 1, cnt = 1;
    scanf ("%lld", &t);
    
    
    for( i = 2; i <= t; i++){
        if(i % 2 == 0) 
			cnt++;
        //else
			sum += cnt;
    }
    
    printf ("%lld\n", sum);
    
      return 0;
}
