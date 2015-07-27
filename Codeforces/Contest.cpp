#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define ULL unsigned long long
#define MAX 105




/*int main(){
    int a, b, c, d, t, tmp, cnt, ans, maxn, check;
    int vasy, misha, v, m, x, y, p, q;
    scanf ("%d %d %d %d", &a, &b, &c, &d);
//    x = (3*a/10);
//    m = a - a/250*c;
//
//    y = (3*b/10);
//    v = b - b/250*d;

    misha = max (3*a/10, a - a/250*c);
    //misha = max (x, m);
    //printf ("Misha = %d\n", misha);

    //vasy = max (y, v);
    vasy = max (3*b/10, b-b/250*d);
    //printf ("Vas = %d\n", vasy);

    if (misha == vasy) puts ("Tie");
    else if (misha > vasy) puts ("Misha");
    else puts ("Vasya");
    return 0;
}*/


/*int sub[10];

void next(int max, int length) {
	int pos = length - 1;

	//find first digit that can be increased
	while(pos >= 0){
		if(sub[pos] == max - (length - 1 - pos)) pos--;
		else break;
	}
    sub[pos]++; //increase digit

    //update other digits
    for(int a = pos+1; a < length; a++)
        sub[a] = sub[a-1] + 1;
}

int main(){
	string word;
	cin >> word;
	int max = word.length() - 1; //max value

	for(int n=1; n <= max+1; n++){
		cout << n << "\n----\n";

		for(int i = 0; i < n; i++) sub[i] = i;

		for(int a = 0; ; a++){
			for(int b = 0; b < max+1; b++)
				cout << word[sub[b]];

			cout << '\n';

			if(sub[0] == max - (n - 1))
				break;
			else
				next(max, n); //maximum value and last position
		}
		cout << '\n';
	}
	return 0;
}*/
