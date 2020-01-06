#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void main()
{
int m1,m2,m3,m4,m5,m6,total;
float per;
printf("Enter m1:");
scanf("%d",&m1);
printf("Enter m2:");
scanf("%d",&m2);
printf("Enter m3:");
scanf("%d",&m3);
printf("Enter m4:");
scanf("%d",&m4);
printf("Enter m5:");
scanf("%d",&m5);
printf("Enter m6:");
scanf("%d",&m6);

total = m1+m2+m3+m4+m5+m6;
per = (float)total/1200*100.0;
if(per>45)
{
	printf("passed\n");
	printf("mark obtained=%d",total);
}
else
{
	printf("fail\n");
	printf("mark obtained=%d",total);
}
}	
	
  
