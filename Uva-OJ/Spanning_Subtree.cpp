/*#include <stdio.h>

int main ()
{
    int n, t = 0;
    while (scanf ("%d", &n) == 1)
    {
        if (n == 0)
            break;
        printf ("Case %d: %d\n", ++t, n/2);
    }
    return 0;
}*/


/*#include<stdio.h>
#include<conio.h>
int a[20][20],q[20],visited[20],n,i,j,f=0,r=-1;
void bfs(int v)
{
 for(i=1;i<=n;i++)
  if(a[v][i] && !visited[i])
   q[++r]=i;
 if(f<=r)
 {
  visited[q[f]]=1;
  bfs(q[f++]);
 }
}
int main()
{
 int v;
 printf("\n Enter the number of vertices:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  q[i]=0;
  visited[i]=0;
 }
 printf("\n Enter graph data in matrix form:\n");
 for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
   scanf("%d",&a[i][j]);
 printf("\n Enter the starting vertex:");
 scanf("%d",&v);
 bfs(v);
 printf("\n The node which are reachable are:\n");
 for(i=1;i<=n;i++)
  if(visited[i])
   printf("%d\t",i);
  else
   printf("\n Bfs is not possible");
    return 0;
}*/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[1000],b[1000];
    int i,j,n,flag,count;
    while(scanf("%d",&n)==1&&n!=-1)
    {
        scanf("%s",a);
        scanf("%s",b);
        count=0;
        printf("Round %d\n",n);
        for(i=0;i<strlen(b);i++)
        {
            for(j=0,flag=0;j<strlen(a);j++)
            {
                if(a[j]==b[i])
                {
                  a[j]='0';
                  flag=1;
                }
            }
            if(flag==0)
            count++;
            for(j=0,flag=0;j<strlen(a);j++)
            {
                if(a[j]!='0')
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                puts("You win.");
               break;
            }
            if(count==7)
            {
                puts("You lose.");
                break;
            }
        }
        if(count<7&&flag==1)
        puts("You chickened out.");
    }
    return 0;
}

