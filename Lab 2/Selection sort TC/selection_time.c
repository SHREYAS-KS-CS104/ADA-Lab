#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int n;
void selection(int a[],int n)
{


  int min,i,j,t;

  for(i=0;i<n-2;i++)
  {
    min=i;
    for(j=i+1;j<n;j++)
    {
      if(a[j]<a[min])
      min=j;
    }
    t=a[i];
    a[i]=a[min];
    a[min]=t;
  }
}
int main()
{
 int i;
 double st;
 clock_t start, end;
 printf("Enter the number of elements of the array\n");
 scanf("%d",&n);
 int array[n],array1[n];
 for (i = 0; i < n; i++)
 {
    array[i]= rand()%2000;
    array1[i]=array[i];
    printf("%d ", array[i]);
 }
 printf("\n");
 start = clock();
 selection(array1,n);
 end = clock();
 st = ((double) (end - start)) / CLOCKS_PER_SEC;
 printf("Sorted array is : ");
 for (i = 0; i < n; i++)
 {
    printf("%d ", array1[i]);
 }
 printf("\n");
 printf("\nTime taken by Selection Sort : %lf\n", st);
 printf("\n");
 return 0;
}