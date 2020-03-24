#include<stdio.h>
void feet(int inch)
{
	int f,i;
	f=inch/12;
	i=inch%12;
	printf("%d inch = %d feet + %d inch",inch,f,i);
	
}

main()
{
	int inch;
	printf("Enter the total inches \n");
	scanf("%d",&inch);
	feet(inch);
}
