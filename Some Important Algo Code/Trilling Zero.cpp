/*Algorithm:

n! = 1*2*...*n. the trailing zeros are from 2*5(10 = 2*5 too) thus, we can find how many 2*5 exists.
count how many 2 exists: 2 has one 2, 4 has two 2s...
count how many 5 exists: 5 has one, 10 has one,...25 has two 5s...
then match each 2 to a 5. the number of 2 and 5 pairs = the number of 0s in the end of the n!*/


/*Only numbers ending in zero create trailing zeros in multiplication.
so for x < 10, x! has no trailing zeros,
for 10 <= x < 20 , x! has 1 trailing zero as includes 10,
for 20 <= x < 30 , x! has 2 trailing zeros as includes 20 * 10,
for 30 <= x < 40 , x! has 3 trailing zeros as includes 30 * 20 * 10
..
for 100 <= x < 110 , x! has 11 trailing zeros as includes 100 *90 *80 *70*60*50*40*30*20*10
for 110 <= x < 120 , x! has 12 trailing zeros as includes 110*100 *90 *80 *70*60*50*40*30*20*10
..
for 1000 <= x < 1010 , x! has 11 trailing zeros as includes three zeros for the 1000,
9*2=18 zeros for each round 100's and 9*9=81 zeros for each power of 10 that is not a round 100 or 1000. So thats 3+18+81=102 zeros

So first find power of 10 that is greater than your number, and add up all the zeros the powers of 10 contribute below that max power.

if I find time I'll come back with some code
6 years ago*/


//Code:
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

int calc_tzeroes(int n);

int trailingZeros(int n){
    int count_2 = 0;
    int count_5 = 0;
    for(int i=1;i<=n;i++){
        int tmp = i;
        while(tmp/2){
            if(tmp%2==0){
                count_2++;
                tmp=tmp/2;
            }
            else break;
        }
        tmp = i;
        while(tmp/5){
            if(tmp%5==0){
                count_5++;
                tmp = tmp/5;
            }
            else break;
        }
    }
    return count_2>count_5?count_5:count_2;
}

int calc_tzeroes(int n){
    int tzeroes = 0;
    if (n < 5) {return tzeroes;}
    int k = 1;
    while ((int)floor(pow(5, k + 1)) < n) {++k;}
    int i;
    for (i = 1; i <= k; ++i)
        tzeroes += floor((n / pow(5, i)));
    return tzeroes;
}

int main(void){
    int set_len;
    scanf("%d", &set_len);
    int answers[set_len];
    int i, input;
    for (i = 0; i < set_len; ++i){
        scanf("%d", &input);
        answers[i] = trailingZeros(input);
    }
    for (i = 0; i < set_len; ++i)
        printf("%d\n", answers[i]);
    return 0;
}


// Another Code
/*
int count5(int a){
    int b=0;
    for(int i=a;i>0;i=i/5){
        if(i%15625==0){
            b=b+6;
            i=i/15625;
        }
        if(i%3125==0){
            b=b+5;
            i=i/3125;
        }
        if(i%625==0){
            b=b+4;
            i=i/625;
        }
        if(i%125==0){
            b=b+3;
            i=i/125;
        }
        if(i%25==0){
            b=b+2;
            i=i/25;
        }
        if(i%5==0){
            b++;
        }
        else
            break;

    }
    return b;
}
int main(){
    int l;
    int n=0;
    cin>>l; //no of test cases taken as input
    int *T = new int[l];

    for(int i=0;i<l;i++)
        cin>>T[i]; //nos taken as input for the same no of test cases

    for(int i=0;i<l;i++){
        n=0;
        for(int j=5;j<=T[i];j=j+5){
            n+=count5(j); //no of trailing zeroes calculted
        }
        cout<<n<<endl; //no for each trialing zero printed
    }

    delete []T;


}

*/
