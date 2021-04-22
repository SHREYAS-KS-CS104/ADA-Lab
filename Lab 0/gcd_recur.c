#include<stdio.h>
#include<math.h>
int gcd(int m,int n)
{
 if(n==0)
 return m;
 if(m<n)
 return gcd(n,m);
 return gcd(n,m%n);
}
int main()
{
 int n,m,res;
 printf("Enter value of m&n:\n");
 scanf("%d%d",&m,&n);
 res=gcd(m,n);
 printf("gcd(%d,%d)=%d\n",m,n,res);
 return 0;
}