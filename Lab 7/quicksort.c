#include<stdio.h> 
#include<time.h>
#include<stdlib.h>
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 

int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];   
    int i = (low - 1);  
  
    for (int j = low; j <= high- 1; j++) 
    { 
        if (arr[j] < pivot) 
        { 
            i++;   
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 

void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        int pi = partition(arr, low, high); 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 

int main() 
{ 
    int arr[15000],size,i,j,ch,temp;
    clock_t start,end;
    while(1)
    {
        printf("\n1: For manual entry of N value and array elements.");
        printf("\n2: To display time taken for sorting number of elements N in the range 500 to 14500.");
        printf("\n3: To exit from the program.");
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
             case 1:printf("Enter size of array: \n");
                    scanf("%d",&size);
                    printf("Enter the elements to sort in the array: \n");
                    for(i=0;i<size;i++)
                    scanf("%d",&arr[i]);
                    start=clock();
                    quickSort(arr, 0, size-1); 
                    end=clock();
                    printf("Sorted array: "); 
                    printArray(arr,size); 
                    printf("\n Time taken to sort %d numbers is %f secs.\n",size,(((double)(end-start))/CLOCKS_PER_SEC));
                break;
              case 2:  size=500;
                while(size<=14500) 
                {
                    for(i=0;i<size;i++)
                    {
                        arr[i]=size-i;
                    }
                    start=clock();
                     quickSort(arr, 0, size-1); 
                    //Dummy loop to create delay
                    for(j=0;j<500000;j++)
                    { 
                        temp=38/600;
                    }
                    end=clock();
                    printf("\n Time taken to sort %d numbers is %f secs.\n",size,(((double)(end-start))/CLOCKS_PER_SEC));
                    size=size+1000;
                }   
            break;
            case 3: 
                 exit(0);
                 break;
        }   
    }
    
 
   return 0;
 
} 
