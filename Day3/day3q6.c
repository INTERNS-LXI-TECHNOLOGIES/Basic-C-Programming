#include <stdio.h>
int main(){
int limit,values[100],num,Repeat=0,i;
printf("Enter limit\n");
	scanf("%d\n",&limit);
	printf("Enter Values\n");
	for(i=0;i<limit;i++)
	{
		scanf("%d\n",&values[i]);
	}
	printf("Enter a number to check no of time it repeat\n" );
	scanf("%d\n",&num);
	for(i=0;i<limit;i++)
	{
		if(num==values[i])
		Repeat++;
	}
	printf(" no of time %d repeat :	%d	",num,Repeat );
	}
