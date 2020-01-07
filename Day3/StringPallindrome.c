#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main()
{
	char str[20],rts[20],rev[20]=" ";
	int i,flag=0;
	printf("Enter the string\n");
	gets(str);
	
	strcpy(rts,str);
	int len = strlen(str);
	for(i=0;i<=len;i++)
	{
		if(str[i]!=str[len-i-1])
		{
			flag =1;
			break;
		}
		
	}
	if(flag==1)
	{
			
		printf("\nthe given string is not pallindrome\n");
		
	}
	else
	{
		printf("Pallindrome");
	}
	
	
	
}