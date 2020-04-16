
#include <stdio.h>
int main()
void accept(int 100[int], array n)

{
 int arr[100],n;
 void accept(int a[100], int n);
 int find(int a[100], int n);
 accept(arr,n);
 find(arr,n);
}
void accept(int 100[int], array n)
{
  int  c ;

  printf("Enter the number of elements in array\n");
  scanf("%d", &n);

  printf("Enter %d integer\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
}
int find(int array[100], int n)
{
 int search,c;
  printf("Enter a number to search\n");
  scanf("%d", &search);

  for (c = 0; c < n; c++)
  {
    if (array[c] == search)
    {
      printf("%d is present at location %d.\n", search, c+1);
      break;
    }
  }
  if (c == n)
    printf("%d isn't present in the array.\n", search);

  return 0;
}
