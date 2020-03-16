#include<stdio.h>
main()
{
	int l1,l2,l3,l4 ,max;
	printf("Enter the numbers \n");
	scanf("%d%d%d%d",&l1,&l2,&l3,&l4);
	if((l1>l2) && (l1>l3) && (l1>l4) )
		max= l1;
	else if((l2>l1) && (l2>l3) && (l2>l4) )
		max= l2;
	else if((l3>l1) && (l3>l2) && (l1>l4) )
		max= l3;
	else
		max= l4;
	printf("Largest is = %d" , max);
	
}
