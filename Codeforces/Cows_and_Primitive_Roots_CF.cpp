/*#include <stdio.h>

int main()
{
    int prime_num, x, y, i, j, count, check;
    while (scanf ("%d", &prime_num) == 1){
        count = 0;
        for (i = 1; i < prime_num; i++){
            x = 1;
            check = 1;
            for (j = 1; j < prime_num - 1; j++){
                x = (x * i) % prime_num;
                y = (x + prime_num - 1) % prime_num;
                if (y % prime_num == 0){//if ((x - 1) % prime_num == 0)
                    check = 0;
                    break;
                }
            }
            if (((x * i) - 1) % prime_num == 0)
                check = 0;
            if (check == 0)
                count++;
        }
        printf ("%d\n", count);
    }
    return 0;
}*/

#include <stdio.h>

int main()
{
	int prime_num;
	while (scanf("%d", &prime_num) == 1)
	{
		int count = 0;
		for (int x = 1; x < prime_num; x++){
			int s, y = 1;
			int flag = 1;
			for (int i = 1; i < prime_num - 1; i++){
				y = (y*x) % prime_num;
				printf ("Y = %d\n\n", y);
				s = (y+prime_num - 1) % prime_num;
				printf ("S = %d\n\n", s);
				if (s % prime_num == 0){
					flag = 0;
					break;
				}
			}
			if (flag == 1 && ((y*x) - 1) % prime_num == 0) count++;
		}
		printf("%d\n", count);
	}
	return 0;
}
