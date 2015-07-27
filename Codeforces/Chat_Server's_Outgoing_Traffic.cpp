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

#define LLI long long int
#define ULL unsigned long long
#define MAX 105

/*int main(){
    int trafic, len, i, j, cnt, tmp;
    char str[MAX];
    //getchar ();
    //gets (str);
    trafic = cnt = 0;
    while (gets (str)){
        len = strlen (str);
        //trafic = cnt = tmp = 0;

        if (str[0] == '+') cnt++;
        else if (str[0] == '-') cnt--;
        else{
           // printf ("Len = %d\n", len);
            for (i = 0; str[i] != ':'; i++)
                //if (str[i] != ':')
                    tmp = len - i - 1;;
                    trafic += tmp * cnt;
        }
        //printf ("%d\n", trafic);
    }
    printf ("%d\n", trafic);
    return 0;
}*/


int main() {
	char str[MAX];
	int traffic = 0, i, j, cnt = 0, len, tmp;
	while(gets(str)){
	    len = strlen (str);
		if(str[0] == '+') cnt++;
        else if(str[0] == '-') cnt--;
        else{
            for(i = 0; str[i] != ':'; i++);
                tmp = len - i - 1;
                traffic += cnt*tmp;
		}
	}
	printf("%d", traffic);
    return 0;
}
