#include <stdio.h>

struct time
{
int H,M,S,T;
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
addTime(t);
}
void addTime(struct time t[])
{
int i,t1=0,t2=0,t3=0;
for(i=1;i<4;i++)
{
t1 = t1 +t[i].H;
t2 = t2 +t[i].M;
t3 = t3 +t[i].S;
}
printf("\n The total time is %d h %d m %d s \n",t1,t2,t3);
}
