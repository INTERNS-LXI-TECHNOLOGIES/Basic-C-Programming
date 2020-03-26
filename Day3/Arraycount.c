#include<stdio.h>
#include<conio.h>
void main()
{
	 int a[1000],i,n,k;
   
    printf("Enter size of the  array  ");
    scanf("%d", &n);
    printf("Enter elements in array  ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
     printf("Enter the k : ");
    scanf("%d", &k);
     
    for(i=0; i<n; i++)
    {
        if(a[i]==k)
        {
			printf("element found ");
			printf("The position of the element is%d",i);
            		 
        }
 
    }
    
	
}

