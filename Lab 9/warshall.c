#include<stdio.h>
void warshall(int a[10][10], int p[10][10],int n)
{
   
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            p[i][j]=a[i][j];
        }
    }
    for(k=0;k<n;k++)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(p[i][j]!=1 && p[i][k]==1 && p[k][j]==1)
                p[i][j]=1;
            }
        }
    }
}

int main()
{
    int a[10][10],p[10][10],n,i,j;
    printf("Enter number of nodes\n");
    scanf("%d",&n);
    printf("Enter adjacency matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    printf("adjacency matrix is: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        printf("%d  ",a[i][j]);
        printf("\n");
    }
    warshall(a,p,n);
    printf("Path matrix is: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        printf("%d  ",p[i][j]);
        printf("\n");
    }
    return 0;
}
