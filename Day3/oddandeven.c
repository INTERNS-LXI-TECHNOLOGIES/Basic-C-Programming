#include <stdio.h>

void main()
{
    int num[100],i,size,n;
    printf("Enter size of the array\n");
    scanf("%d",&size);
    printf("Enter the elements of the array\n");
    for(i=0; i<size; i++)

        scanf("%d",&num[i]);

    printf("\nEven numbers of the array are \n");
     for(i=0; i<size; i++)
	{
        if(num[i]%2==0)
	{
            printf("%d ",num[i]);
        }
	}

    printf("\nOdd numbers of the array are \n");
     for(i=0; i<=size; i++){
        if (num[i]%2==1){
            printf("%d \t",num[i]);
        }
    }
    
}
