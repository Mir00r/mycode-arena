/*#include <stdio.h>

int S, T, N, i, j, k;

void drawing_line (){
    int len;
    len = S * N + (N + 1) * T;
    for (i = 1; i <= T; i++){
        for (j = 1; j <= len; j++)
            printf ("*");
            printf ("\n");
    }
}
void grid(){
    for (i = 1; i <= S; i++){
        for (j = 1; j <= N; j++){
            for (k = 1; k <= T; k++)
                printf ("*");
            for (k = 1; k <= S; k++)
                printf (".");
        }
        for (k = 1; k <= T; k++)
            printf ("*");
            printf ("\n");
    }
}
int main (){
    int t = 0, i;
    while (scanf ("%d%d%d", &S, &T, &N) == 3){
        if (S == 0 && T == 0 && N == 0)
            break;
        printf ("Case %d:\n", ++t);
        for (i = 1; i <= N; i++){
            drawing_line ();
            grid();
        }
        drawing_line ();
        printf ("\n");
    }
    return 0;
}
*/


/*
 * Solution for the "LCD Display" problem.
 * UVa ID: 706
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_SIZE 9

int main (int argc, const char * argv[]) {
	/* number of vertical or horizontal segments in each digit */
	int s;

	/* the number to print */
	char digitString[MAX_SIZE];

	/*
	 * LED representation for each number, according to
	 * the following convention:
	 *
	 *  -0-
	 * |   |
	 * 2   1
	 * |   |
	 *  -3-
	 * |   |
	 * 5   4
	 * |   |
	 *  -6-
	 *
	 */

	const char conversionTable[10][7] = {
		      /* 0   1   2   3   4   5   6 */
		/* 0 */ '-','|','|',' ','|','|','-',
		/* 1 */ ' ','|',' ',' ','|',' ',' ',
		/* 2 */ '-','|',' ','-',' ','|','-',
		/* 3 */ '-','|',' ','-','|',' ','-',
		/* 4 */ ' ','|','|','-','|',' ',' ',
		/* 5 */ '-',' ','|','-','|',' ','-',
		/* 6 */ '-',' ','|','-','|','|','-',
		/* 7 */ '-','|',' ',' ','|',' ',' ',
		/* 8 */ '-','|','|','-','|','|','-',
		/* 9 */ '-','|','|','-','|',' ','-',

	};

	/* iterators */
	int i, j, k;
	while(scanf("%d %s", &s, &digitString) != EOF) {
		/* 0, ends the program */
		if (!s) {
			return 0;
		}
		int n = strlen(digitString);
		int digit;
		for (i = 0; i < 2*s+3; i++) {
			for (j = 0; j < n; j ++) {
				digit = digitString[j] - '0';
				/* upper, middle and lower parts */
				if ((i % (s + 1)) == 0){
					printf(" ");
					for (k = 0; k < s; k++){
						printf("%c", conversionTable[digit][(i / (s + 1)) * 3]);
					}
					printf(" ");
				}
				/* between upper and middle parts */
				if (i > 0 && i < (s + 1)){
					printf("%c", conversionTable[digit][2]);
					for (k = 0; k < s; k++){
						printf(" ");
					}
					printf("%c", conversionTable[digit][1]);
				}
				/* between middle and lower parts */
				if (i > (s + 1) && i < (2*s + 2)){
					printf("%c", conversionTable[digit][5]);
					for (k = 0; k < s; k++){
						printf(" ");
					}
					printf("%c", conversionTable[digit][4]);
				}
                /* if not the last number */
				if (j != n-1)
					printf(" ");

			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
