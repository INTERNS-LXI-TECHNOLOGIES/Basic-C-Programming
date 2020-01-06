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

for(i=0;i<5;i++)
{
	if(a[i] == key)
	{
		printf("Element  found");
		break;
	}
	



}
}
