#include<stdio.h>
main()
{
	
	printf("         1st Pattern         \n\n");
	int i,j,count;
	for(i=1;i<6;i++)
	{
		for(j=i;j>0;j--)
		{
			printf("*");
		}
	printf("\n");		
	}
	
	
	printf("         2nd Pattern         \n\n");
	for(i=5;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			printf("*");
		}
	printf("\n");		
	}
	
	printf("         3rd Pattern         \n\n");
	
	for (i = 1; i <= 5; i++)  
  {
    for (j = 1; j<= 5-i;j++)  
      printf(" ");
    for (j = 1; j<= i; j++) 
      printf("* ");
    printf("\n");
  }
	
	
	printf("         4th Pattern         \n\n");
	
	for(i=1;i<6;i++)
	{	count=1;
		for(j=i;j>0;j--)
		{
			printf("%d",count++);
		}
	printf("\n");		
	}
	
printf("         5th Pattern         \n\n");
	count=1;
	for(i=1;i<6;i++)
	{	
		for(j=i;j>0;j--)
		{
			printf("%d ",count++);
		}
	printf("\n");		
	}
	
	printf("         6th Pattern         \n\n");
	count=1;
	for(i=1;i<6;i++)
	{	
		for(j=i;j>0;j--)
		{
			printf("%d ",count);
		}
	printf("\n");count++;
	}
	
	printf("         7th Pattern         \n\n");
	
	for(i=5;i>0;i--)
	{	count = 1;
		for(j=0;j<i;j++)
		{
			printf("%d  ",count++);
		}
	printf("\n");		
	}
	
		printf("         8th Pattern         \n\n");
	for(i=1;i<6;i++)
	{	count=i;
		for(j=5;j-i>=0;j--)
		{
			printf("%d ",count++);
		}
	printf("\n");		
	}
}
