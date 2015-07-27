#include<stdio.h>

int main()
{
	int cases, caseno, first, second;

	scanf(" %d",&cases);
	for(caseno = 1; caseno <= cases; caseno++)
	{
		scanf(" %d %d", &first, &second);
		printf("Case %d: ",caseno);
		if(first > second)
			printf("First team wins.\n");
		else
			printf("Case %d: Second team wins.\n", caseno);
	}
	return 0;
}
