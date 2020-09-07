#include<stdio.h>
#include<string.h>
void main()
{
int i,j,d,m,y,n,y1=1950,m1=1,d1=1;
char name[10],name1[10];
printf("\n Enter the number of persons");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n enter the name");
scanf("%s",&name[10]);
printf("\n enter the day");
scanf("%d",&d);
printf("\n enter the month");
scanf("%d",&m);
printf("\n enter the");
scanf("%d",&y);
if(y>y1)
{
y1=y;
m1=m;
d1=d;
strcpy(name1,name);
}
else
{
if(y==y1)
{
if(m>m1)
{
y1=y;
m1=m;
d1=d;
strcpy(name1,name);
}
if(m==m1)
{
if(d>d1)
{
y1=y;
m1=m;
d1=d;
strcpy(name1,name);
}
}
}
}
}
printf("\n the youngest is: %s %d %d %d " ,name1,y1,m1,d1);
}
