/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 1000001
#define eps 1e-11

double arr[MAX], tmp_arr;
void make_ans(){
    int i, j;
    //arr[1] = 1;
    /*for (i = 2; i <= MAX; i++)
        arr[i] = arr[i-1] + 1.0/i;*/
  /* for (i = 1; i <= MAX; i++){
        arr[i] = arr[i-1];
        for (j = 1; j <= 100; j++)
            arr[i] += 1.0 / ((i-1)*j+100);
    }
}*/
/*int main(){
    make_ans();
    int t, c = 0, n, div, mod;
    double tmp_arr;
    scanf ("%d", &t);
    while (t--){
        scanf ("%d", &n);
        div = n / 100;
        mod = n % 100;
        tmp_arr = arr[n];
        while (mod){
            tmp_arr += 1.0 / (div*100+mod);
            mod--;
        }
        printf ("Case %d: %.10lf\n", ++c, tmp_arr);
    }
    //printf ("OK");
    return 0;
}*/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <iomanip>
using namespace std;

/*double INF = 100000000;
double ans[1000001];
int t, n, a, b;
double tmp;

void CPF() {
	for(int i = 1; i <= 1000001; i++) {
		ans[i] = ans[i-1];
		for(int j = 1; j <= 100; j++)
			ans[i] += (double)1/((i-1)*100+j);
	}
}

int main(void) {
	CPF();
	scanf("%d", &t);
	for(int cas = 1; cas <= t; cas++) {
		scanf("%d", &n);
		a = n/100;
		b = n%100;
		tmp = ans[a];
		while(b) {
			tmp += (double)1/(a*100+b);
			b--;
		}
		printf("Case %d: %.9f\n", cas, tmp);
	}
	return 0;
}*/

int ki_kaj_kore(int x){
    char str[10];
    sprintf (str, "%d", x);
    printf ("X = %d\n", x);

}

int main(){
    int t, c = 0, n, m, tmp, ans;
    while (scanf ("%d", &n) == 1){
        ans = ki_kaj_kore(n);

    }
    return 0;
}
/*
double ans[N];

void makeAns() {
    double t = 0;
    for (int i = 1; i < 100000001; i++) {
        t += 1.0 / i;
        if (i % 100 == 0) {
            ans[i / 100] = t;
        }
    }
}

int main () {
    makeAns();
    int T;
    int index = 1;
    scanf ("%d", &T);
    while (T--) {
        int n;
        scanf ("%d", &n);
        double t = ans[n / 100];
        for (int i = n / 100 * 100 + 1; i <= n; i++) {
            t += 1.0 / i;
        }
        printf ("Case %d: %.10f\n", index++, t);
    }
    return 0;
}
*/
