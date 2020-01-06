#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() 
{

int i,a[10],key;
printf("Enter The elements:\t");
for(i=0;i<5;i++)
{

scanf("%d",&a[i]);	

}
printf("Enter the search key:");
scanf("%d",&key);
int flag =0;
for(i=0;i<5;i++)
{
	if(a[i] == key)
	{	
		flag = 1;
		
		break;
	}	

}
if(flag == 1)
{
	printf("Element  found");
}
else
{
	printf("Element Not found");

}
}
