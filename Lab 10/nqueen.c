#include <stdio.h>
#include <stdlib.h>
int canplace(int r,int c[50])
{   
    int i;
    for(i=0;i<r;i++)
    {
        if(c[i]==c[r] || abs(c[i]-c[r])==abs(i-r))
        return 0;
    }
    return 1;
}
void display(int c[50],int n)
{
    int i,j;
    char cb[10][10];
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    cb[i][j]='-';
    for(i=0;i<n;i++)
    cb[i][c[i]]='q';
    printf("-----------------------------\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%c\t",cb[i][j]);
        }
        printf("\n");
    }
}
void nqueen(int n)
{
    int r,c[50];
    c[0]=-1;
    r=0;
    while(r>=0)
    {
        c[r]++;
        while(c[r]<n &&!canplace(r,c))
        c[r]++;
        if(c[r]<n)
        {
            if(r==n-1)
            {
                display(c,n);
                printf("\n");
            }
            else
            {
                r++;
                c[r]=-1;
            }
        }
        else
        r--;
    }
}
int main()
{
    int n;
    printf("Enter the number of queens\n");
    scanf("%d",&n);
    nqueen(n);
    return 0;

}
