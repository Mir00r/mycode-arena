#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define L long int
#define LL long long int
#define MAX 9999
#define row 105
#define col 105


char cake[row][col];
int X_arr[] = {-1, 1, 0, 0};
int Y_arr[] = {0, 0, -1, 1};
int r, c;
void strw_find(int x, int y){
    if ( x < 0 || x == r || y < 0 || y == c || cake[x][y] == '.') return;
    cake[x][y] = '.';
    int nx, ny, i;
    for (i = 0; i < 4; i++){
        nx = X_arr[i] + x;
        ny = Y_arr[i] + y;
        strw_find(nx, ny);
    }
}

int main(){
    int i, j, cnt, tmp, ans;
    while (scanf ("%d%d", &r, &c) == 2){
        cnt = 0;
        tmp = r*c;
        for (i = 0; i < r; i++) scanf ("%s", cake[i]);
            //for (j = 0; j < c; j++) scanf ("%s", cake[i][j]);
        for (i = 0; i < r; i++)
            for (j = 0; j < c; j++)
                if (cake[i][j] == '.'){
                    cnt++;
                    strw_find(i, j);
                }
            int trash = tmp - cnt;
            ans = cnt - trash;
            printf ("%d\n", ans);
    }
    return 0;
}


/*int main(){
    int n, k, i, j, cnt, tmp, ans;
    while (scanf ("%d%d", &n, &k) == 2){
        for (i = 0; i < n; i++){
            for (j = 0; j < n; j++){
                if (i == j) printf ("%d ", k);
                else printf ("0 ");
            }
            printf ("\n");

}
    }
    return 0;
}*/



/*int main(){
	int i,j,k,n, num, rem;
	scanf("%d%d", &n, &k);
	num = k/n;
	rem = k%n;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(i == j) printf("%d",num+rem);
			else
				printf("%d",num);
			if(j!=n-1) printf(" ");
		}
		printf("\n");
	}

	return 0;
}*/
