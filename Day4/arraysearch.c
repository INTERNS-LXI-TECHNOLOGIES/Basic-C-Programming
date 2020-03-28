#include<stdio.h>
#include<conio.h>


void linear_search(int[], int);

int main() {
	
	int n;
	printf("enter the size of the array");
  scanf("%d",&n);
  
  int arr_search[n], i, element;
  
  

  printf("\nEnter %d Elements for Searching : \n", n);
  for (i = 0; i < n; i++)
    scanf("%d", &arr_search[i]);

  printf("Enter Element to Search : ");
  scanf("%d", &element);

  
  linear_search(arr_search, element);

  getch();
}

void linear_search(int fn_arr[], int element) {
  int i,n;

  
  for (i = 0; i < n; i++) {
    
    if (fn_arr[i] == element) {
      printf("Linear Search : %d is Found at array : %d.\n", element, i + 1);
      break;
    }
  }

  if (i == n)
    printf("\nSearch Element : %d  : Not Found \n", element);
}
