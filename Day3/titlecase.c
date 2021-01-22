#include<stdio.h>
#include<string.h>
 void main()
{
	char s[30];
	int i;
	printf("Enter the string\n");
	gets(s);
	if(s[0]>='a'&&s[0]<='z')
			{
				s[0]=s[0]-32;
			}
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==' ')
		{
			if(s[i+1]>='a'&&s[i+1]<='z')
			{
				s[i+1]=s[i+1]-32;
			}
		}
	}
	printf("title case => %s",s);
}