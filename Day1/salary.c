#include<stdio.h>
void main()
{
long int	 basic_pay,hra,pf,da,net_sal;
hra = 500;
printf("enter the basic salary");
scanf("%ld",&basic_pay);
if (basic_pay<10000)
{
da = (basic_pay*60)/100;
pf = (basic_pay*15)/100;
}
if (basic_pay>10000)
{
da = (basic_pay*75)/100;
pf = (basic_pay*25)/100;
}
net_sal = basic_pay+da+hra-pf;
printf("da %ld\n",da);
printf("pf %ld\n",pf);
printf("net salary is %ld",net_sal);
} 
