#include <stdio.h>
int main()
{
	int h,m,s,minutes,sec;
	printf("Enter no of  minutes :\n");
	scanf("%d",&minutes);
	sec=minutes*60;
	//printf("%d",sec);
	h=sec/3600;
	sec=sec % 3600;
	
	m=sec/60;
	s=sec%60;
	printf("Hours:minutes:seconds\n");
	
	printf("%d :%d :%d ",h,m,s);
	
	

	
	
	}
	

