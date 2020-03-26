#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[100],b[100];
	printf("enter a string");
	scanf("%c",&a[100]);
	strcpy(b,a);
	strrev(b);
	if(strcmp(b,a)==0)
	{
		printf("palindrome");
	}
	else
	{
		printf("Not a palindrome");
	}

}
