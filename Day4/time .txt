#include <stdio.h>
#include <stdlib.h>


struct time
{
	int H;
	int M;
	int S;
	int T;
};
void addTime(struct time t[]);
void main()
{
	int i;
	struct time t[5];
	for(i=1;i<4;i++)
	{
	printf("Enter Time %d in hour,minute,seconds:\n",i);
	scanf("%d %d %d", &t[i].H, &t[i].M, &t[i].S);
	
	}
	printf("Adding Time.........\n");
	addTime(t);
}

void addTime(struct time t[])
{
	int i,t1=0,t2=0,t3=0,d;
	for(i=1;i<4;i++)
	{
		t1 = t1 +t[i].H;
		t2 = t2 +t[i].M;
		t3 = t3 +t[i].S;
		
				
	}
	printf("%d%3 %d%3 %d%3",t1,t2,t3);
	
	while(t3>=60)
	{
		t3 = t3-60;
		t2++;
	}
	while(t2>=60)
	{
		t2 = t2-60;
		t1++;
	}
	
	while(t1>24)
	{
		t1 = t1-24;
		d++;
		
	}
	printf("\n%d%3 Day %d%3 Hour  %d%3 Minute %d%3 Second",d,t1,t2,t3);
}