/*#include <stdio.h>

int main()
{
    int t = 0, i, n, req[16], month[16];;
    scanf("%d", &n);
    while(n >= 0)
    {
        month[0] = n;
        for(i = 0; i < 12; i++)
            scanf("%d", &month[i]);
            for(i = 0; i < 12; i++)
                scanf("%d", &req[i]);
                printf("Case %d:\n", ++t);
                for(i = 0; i < 12; i++)
                {
                    if(n >= req[i])
                    {
                        n -= req[i];
                        printf("No problem! :D\n");
                    }
                    else
                        printf("No problem. :(\n");
                        n += month[i+1];
                }
        scanf("%d", &n);
    }
    return 0;
}*/


#include <stdio.h>

int main ()
{
	int prob_num;
	int month [15];
	int required [15];
	int Case = 0, i;
	while (scanf ("%d", &prob_num)){
		if (prob_num < 0)
			return 0;
		month [0] = prob_num;
		for (i = 1; i < 13; i++)
			scanf ("%d", &month [i]);
		for (i = 0; i < 12; i++)
			scanf ("%d", &required [i]);
		printf ("Case %d:\n", ++Case);
		for (i = 0; i < 12; i++){
			if (prob_num >= required [i]){
				prob_num -= required [i];
				printf ("No problem! :D\n");
			}
			else
				printf ("No problem. :(\n");
                prob_num += month [i + 1];
		}
	}
	return 0;
}

