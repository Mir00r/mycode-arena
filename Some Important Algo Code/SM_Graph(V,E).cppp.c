#include <stdio.h>
#define dim 20

int am[dim][dim]={0};
int main()
{
    FILE *fp;
    fp = fopen("inp.txt", "r+");
    //int am[dim][dim]={0};
    int i, j, a, b, v, e;
    printf("Enter V & E num: ");
    //fscanf(fp, "%d%d", &v, &e);
    scanf("%d%d", &v, &e);
    for(i = 1; i <= e; i++)
    {
        printf("Enter terminal Nodes for edges: ");
        //fscanf(fp, "%d%d", &a, &b);
        scanf("%d%d", &a, &b);
        am[a][b] = 1;
    }
    printf("Enter the vertex: ");
    int key, count = 0;
    scanf("%d", &key);
    //printf("\n\n\n%d\n\n\n", v);
    for(i = 1; i <= v; i++)
    {
        count += am[i][key];
    }
    printf(" In deg = %d\n", count);
    return 0;
}
