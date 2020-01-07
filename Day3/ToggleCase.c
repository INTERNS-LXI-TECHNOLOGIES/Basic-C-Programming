#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main()
{
	int i;
	char a[10];
	printf("Enter the string \n");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='a' &&  a[i]<='z' )
		{
			a[i] = a[i]-32;
			
		}
		else if(a[i]>='A' && a[i]<='Z')
		{
			a[i] = a[i]+32;
			
		}
	}
	printf("Toggle case of given string:%s",a);
}
