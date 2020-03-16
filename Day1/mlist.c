#include<stdio.h>
main()
{
	int m1,m2,m3,tot;
	float p;
	printf("Enter the 3 marks : ");
	scanf("%d%d%d",&m1,&m2,&m3);
	tot= m1+m2+m3;
	p=(tot/90.0)*100;
	if(p>45.0)
		printf("total = %d , percentage = %f, Result = pass",tot,p);
	else 
		printf("total = %d , percentage = %f, Result = fail" ,tot,p);
}
