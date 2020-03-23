#include<stdio.h>
main()
{
	int temp,a[10],r,n,i,t,min,j;
	printf("Enter how many elements\n");
	scanf("%d",&n);
	printf("Enter  the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i = 0; i < n-1; i++) 
    { 
        
        min = i; 
        for (j = i+1; j < n; j++) 
        {
          if (a[j] < a[min]) 
            min = j; 
    	}
  		temp=a[i];
  		a[i]=a[min];
  		a[min]=temp;
    }
    printf("Sorted array = ");
    for (i=0; i < n; i++) 
        printf("%d ", a[i]); 
}
        
        
