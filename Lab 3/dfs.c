#include <stdio.h>
#include <time.h>
void dfs(int n, int cost[10][10], int u, int s[])
{
int v;
s[u]=1;
for(v=0;v<n;v++)
{
if((cost[u][v]==1) && (s[v]==0))
dfs(n,cost,v,s);
}
}
int main()
{
int n,i,j,cost[10][10],s[10],con,flag;
clock_t start, end;
double t;
printf("Enter the number of nodes\n");
scanf("%d",&n);
printf("Enter the adjacency matrix\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
scanf("%d",&cost[i][j]);
}
con=0;
for(j=0;j<n;j++)
{
for(i=0;i<n;i++)
s[i]=0;
dfs(n,cost,j,s);
flag=0;
for(i=0;i<n;i++)
{
if(s[i]==0)
flag=1;

}
if(flag==0)
con=1;

}
if(con==1)
printf("\nGraph is connected\n");
else
printf("\nGraph is not connected\n");
start = clock();
 dfs(n,cost,j,s);
 end = clock();
 t = ((double) (end - start)) / CLOCKS_PER_SEC;
 printf("\n");
 printf("\nTime taken by DFS : %lf\n", t);
 printf("\n");
return 0;
}
