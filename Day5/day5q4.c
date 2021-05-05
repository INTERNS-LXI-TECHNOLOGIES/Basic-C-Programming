#include <stdio.h>

struct time
{
int hr,min,sec;
}t[];
void newTime(struct time t[]);


int main()
{
int i;
struct time t[5];
for(i=0;i<3;i++)
{
printf("Enter Time in hour,minute,seconds:\n");
scanf("%d %d %d", &t[i].hr, &t[i].min, &t[i].sec);
}
newTime(t);
}
void newTime(struct time t[])
{
int i,t1=0,t2=0,t3=0;
for(i=0;i<3;i++)
{
t1 = t1 +t[i].hr;
t2 = t2 +t[i].min;
t3 = t3 +t[i].sec;
}
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

printf("\n %d Hour  %d Minute %d Second",t1,t2,t3);
}
