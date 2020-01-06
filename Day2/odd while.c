#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void main()
{

int i=6;
printf("odd number between 6 to 200\n"  );
//scanf("%d",&n);
while (i<=200)
{
	if(i%2!=0) 
	{
		printf("\t%d ",i);
	}
i++;	
}
}