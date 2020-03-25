#include<stdio.h>
#include<string.h>
main()
{
	int yr,mon,day,y,i,s,ind,j=0;
	int a[20];
	for(i=0;i<20;i++)	a[i]=0;
	char name[20][10];
	for(i=0;;i++)
	{
		printf("Enter your name\n");
		scanf("%s",&name[i]);
		if(strcmp(name[i],"quit")==0)
		{
			break;
		}
		else
		{
		printf("Enter your dob\n");
		scanf("%d",&yr);
	
		y=2020-yr;
		a[i]=y;
		}
	}
	for(i=0;i<20;i++)
	{
		if(a[i]!=0)
			{
				j++;
			}
	}
	s=a[0];
   	for (i=0;i<j;i++)
	{ 
	
      	if(a[i]<s) 
		{
        	s = a[i];
        	ind=i;
      	}
	}
   printf("Youngest one => %s => Age = %d",name[ind],a[ind]);
	
}
