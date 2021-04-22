#include <stdio.h>

void binary_search(int list[], int lo, int hi, int key)
{
int mid;
if (lo > hi)
{
printf("Key not found\n");
return;
}
mid = (lo + hi) / 2;
if (list[mid] == key)
{
printf("Key found at Index %d\n ",mid);
}
else if (list[mid] > key)
{
binary_search(list, lo, mid - 1, key);
}
else if (list[mid] < key)
{
binary_search(list, mid + 1, hi, key);
}
}

int main()
{
int key, size, i;
int list[25];
printf("Enter size of a list: ");
scanf("%d", &size);
printf("Enter elements\n");
for(i = 0; i < size; i++)
{
scanf("%d",&list[i]);
}
printf("\n");
printf("Enter key to search\n");
scanf("%d", &key);
binary_search(list, 0, size, key);
return 0;
}