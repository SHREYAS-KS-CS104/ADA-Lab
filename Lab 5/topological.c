#include<stdio.h>
int temp[10],k=0;
  
void topo(int n,int indegree[10],int a[10][10])
{
   int i,j;
   
   for(i=1;i<=n;i++)
    {
        if(indegree[i]==0)
        {
            indegree[i]=1;
            temp[++k]=i;
            for(j=1;j<=n;j++)
            {
                if(a[i][j]==1&&indegree[j]!=-1)
                indegree[j]--;
            }
            i=0;
        }
    }
}

  int main()
{
   int i,j,n,indegree[10],a[10][10];
   printf("Enter the number of vertices:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   indegree[i]=0;
   printf("\nEnter the adjacency matrix\n");
   for(i=1;i<=n;i++)
   for(j=1;j<=n;j++)
   {
        scanf("%d",&a[i][j]);
        if(a[i][j]==1)
        indegree[j]++;
   }
   topo(n,indegree,a);
   if(k!=n)
   printf("Topological ordering is not possible.\n"); 
   else
    {
        printf("\nTopological ordering is :\n");
        for(i=1;i<=k;i++)
        printf("v%d\t",temp[i]);
    }
    printf("\n");
    return 0;
}
