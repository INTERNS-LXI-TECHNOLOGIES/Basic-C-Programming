#include<stdio.h>
void search(int a[],int ele,int n)
{
	int f=1,i;
	for(i=0;i<n;i++)
	{
		if(a[i]==ele)
		{
			printf("%d is found at position %d",ele,i+1);
			f=1;
			break;
		}
		else
		{
			f=0;
		}
	}
		if(f==0)
		{
			printf("%d is not found",ele);
		}
	
	
}

main()
{
	char c;
	int a[10],i,ele,n;
	printf("\n Enter How many elements \n");
	scanf("%d",&n);
	printf("Enter the array elements :\n\t ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	do
	{
		printf("\n Enter the element to search \n\t");
		scanf("%d",&ele);
		search(a,ele,n);
		printf("\nDo you need to continue(y/n)");
		getchar();
		scanf("%c",&c);
	}while(c=='y');
	
	
}
