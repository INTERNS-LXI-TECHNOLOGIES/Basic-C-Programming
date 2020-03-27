#include<stdio.h>

void sort(int a[],int n)
{
	int i,temp,j;
	for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]< a[j])
            {
                temp    =a[i];
                a[i]  =a[j];
                a[j]  =temp;
            }
        }
    }
}



main()
{
	int a[10],i,n;
	printf("\n Enter How many elements \n");
	scanf("%d",&n);
	printf("Enter the array elements :\n\t ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,n);
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	
}

