#include<stdio.h>
struct time
{
	int hr,min,sec;
}t;

void disp(struct time t)
{
	if(t.hr>=6)
	{
		if(t.min>=16)
		{
			if( t.sec>5)
			{
				printf("TIME T3\n");
			}
			else if(t.min>16)
			{
				printf("TIME T3");
			}
			else if(t.hr>6)
			{
				printf("TIME T3");
			}
			else
			{
				printf("TIME T1");
			}
		}
		else if(t.hr>6)
		{
			printf("TIME T3");
		}
		else
		{
			printf("TIME T1");
		}
	}
	
	else if(t.hr>=3)
	{
		if(t.min>=40)
		{
			if(t.sec>35)
			{
				printf("TIME T1");
			}
			else if(t.min>40)
			{
				printf("TIME T1");
			}
			else if(t.hr>3)
			{
				printf("TIME T1");
			}
			else
			{
				printf("TIME T2");
			}
			
		}
		else if(t.hr>3)
		{
			printf("TIME T1");
		}
		else
		{
			printf("TIME T2");
		}
	}
	else
	{
		printf("TIME T2");
	}
	
	
	
	
}


main()
{
	
	printf("Enter the time :");
	scanf("%d%d%d",&t.hr,&t.min,&t.sec);
	disp(t);
	
}
