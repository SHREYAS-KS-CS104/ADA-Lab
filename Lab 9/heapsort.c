#include<stdio.h>
void heapify(int arr[], int n, int i) 
{ 
    int largest = i;
    int l = 2*i + 1; 
    int r = 2*i + 2; 
    int temp;
    if (l < n && arr[l] > arr[largest]) 
        largest = l; 
    if (r < n && arr[r] > arr[largest]) 
        largest = r; 
    if (largest != i) 
    { 
        temp=arr[i];
        arr[i]=arr[largest];
        arr[largest]=temp;
        heapify(arr, n, largest); 
    } 
} 
  
void heapSort(int arr[], int n) 
{ 
    int i,j,temp;
    for ( i = n / 2 - 1; i >= 0; i--) 
        heapify(arr, n, i); 
  
    for (j=n-1; j>0; j--) 
    { 
        temp=arr[0];
        arr[0]=arr[j];
        arr[j]=temp;
        heapify(arr, j, 0); 
    } 
} 
void printArray(int arr[], int n) 
{ 
    int i;
    for ( i=0; i<n; ++i) 
        printf("%d  ",arr[i]);
    printf("\n");
} 
int main() 
{ 
    int arr[10],i,n;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    heapSort(arr, n); 
    printf("Sorted array is:\n"); 
    printArray(arr, n); 
} 
