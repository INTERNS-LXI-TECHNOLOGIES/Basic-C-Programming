#include <stdio.h>

int main()
{
    int arr[100],i,num;
    printf("Enter size of the array\n");
    scanf("%d",&num);
    printf("Enter the elements of the array\n");
    for(i=0; i<num; i++)

        scanf("%d",&arr[i]);

    printf("\nEven numbers of the array are \n");
     for(i=0; i<num; i++)
	{
        if(arr[i]%2==0)
	{
            printf("%d \t",arr[i]);
        }
	}

    printf("\nOdd numbers of the array are \n");
     for(i=0; i<=num; i++){
        if (arr[i]%2==1){
            printf("%d \t",arr[i]);
        }
    }
    
}
