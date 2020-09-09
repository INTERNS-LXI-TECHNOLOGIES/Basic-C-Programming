#include<stdio.h>
#include<ctype.h>
#include<string.h>
void main()
{
int i,j,n,temp;
char a[20];
printf("enter the string");
scanf("%s",a);
n=strlen(a);
j=n-1;
for(i=0;i<n;i++)
{
if(a[i]==a[j])
{
temp=1;
j--;
}
else
{
temp =0;
break;
}
}
if(temp==1)
	{
		printf("%s  is a palindrome",a);
	}
	else
	{
		printf("%s is not a palindrome",a);
	}
}
