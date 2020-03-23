
#include <stdio.h>
#include <string.h>
main()
{
  	char s[10];
  	int i;
 
  	printf("\n Enter the string: ");
  	gets(s);
  	
  	for (i = 0; s[i]!='\0'; i++)
  	{
  		if(s[i] >= 'a' && s[i] <= 'z')
  		{
  			s[i] = s[i] - 32;
		}		
  		else if(s[i] >= 'A' &&s[i] <= 'Z')
  		{
  			s[i] = s[i] + 32;
		}
  	}
  	printf("String after toggling =>  %s",s);
}
