#include<stdio.h>
#include<string.h>
main()
{
	int i,j,n,pal;
	char s[30],a[30];
	printf("Enter the string\n");
	gets(s);
	n=strlen(s);
	j=n-1;
	//printf("%d",j);
	for(i=0;i<j;i++)
	{
		if(s[i]==s[j])
		{
			pal=1;
			j--;
		}
		else
		{
			pal=0;
			break;
		}
	}
	if(pal==1)
	{
		printf("%s  is a palindrome",s);
	}
	else
	{
		printf("%s is not a palindrome",s);
	}
}
