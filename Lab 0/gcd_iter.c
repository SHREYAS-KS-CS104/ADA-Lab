#include<stdio.h>
#include<math.h>
int gcd(int m,int n,int r)
{
 while(n!=0)
 {
    r=m%n;
    m=n;
    n=r;
 }
 return m;
}
int main()
{
 int n,m,res,r;
 printf("Enter value of m&n:\n");
 scanf("%d%d",&m,&n);
 res=gcd(m,n,r);
 printf("gcd(%d,%d)=%d\n",m,n,res);
 return 0;
}