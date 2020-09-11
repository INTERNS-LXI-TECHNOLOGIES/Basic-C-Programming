#include <stdio.h>

int *Sort(int arr[], int Size);

int main()
{
int Array[50], i, j, Size;
int *arr;
printf("\n Enter the Number of elements in an array :");
scanf("%d", &Size);
printf("\nEnter %d elements of an Array \n", Size);
for (i = 0; i < Size; i++)
{
scanf("%d", &Array[i]);
}  
arr = Sort(Array, Size);   
printf("\n Array of Elemenst in Ascending Order are \n");
for (i = 0; i < Size; i++)
{
printf(" Element at Array[%d] = %d \n", i, arr[i]);
}	
return 0;
}
int *Sort(int arr[], int Size)
{
int i, j, temp;
for (i = 0; i < Size; i++)
{
for (j = i + 1; j < Size; j++)
{
if(arr[i] > arr[j])
{
temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}			
}
}
return arr;	
}
