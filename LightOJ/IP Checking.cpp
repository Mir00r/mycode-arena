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

// Using Recursion

/*ll toBinary(int decimalNo){
    ll binaryNo,remainder,factor = 1;
    if(decimalNo != 0){
         remainder = decimalNo % 2;
         binaryNo = binaryNo + remainder * factor;
         factor = factor * 10;
         toBinary(decimalNo / 2);
    }
    return binaryNo;
}*/

/*ll to_bin (int dec_num){
    ll bin_num, rem, fact = 1;
    while (dec_num != 0){
        rem = dec_num % 2;
        bin_num = bin_num + rem * fact;
        fact *= 10;
        dec_num /= 2;
    }
    return bin_num;
}*/

ll to_bin (ll bin_num){
    ll power, rem, sum;
    sum = power = 0;
    while (bin_num > 0){
        rem = bin_num % 10;
        sum += rem * pow(2, power);
        power++;
        bin_num /= 10;
    }
    return sum;
}

int main(){
    int tc, cs=1, i, j, a_dec, b_dec, c_dec, d_dec, e, f, g, h;
    ll m_bin, n_bin, o_bin, p_bin, tmp;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d.%d.%d.%d", &a_dec, &b_dec, &c_dec, &d_dec);
        scanf ("%lld.%lld.%lld.%lld", &m_bin, &n_bin, &o_bin, &p_bin);
        e = to_bin(m_bin);
        f = to_bin(n_bin);
        g = to_bin(o_bin);
        h = to_bin(p_bin);
        if (e == a_dec && f == b_dec && g == c_dec && h == d_dec) printf ("Case %d: Yes\n", cs++);
        else printf ("Case %d: No\n", cs++);
    }
    return 0;
}

