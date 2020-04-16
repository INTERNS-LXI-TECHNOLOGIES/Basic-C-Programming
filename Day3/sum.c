#include <stdio.h>
void main()
{
    int a[10],i,n,sum=0;
   
    printf("Enter size of the array : ");
    scanf("%d",&n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
 
    
    for(i=0; i<n; i++)
    {
         
        sum+=a[i];
    }
     printf("sum of array is : %d",sum);
 
 
}