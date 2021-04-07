#include <stdio.h>
#include <string.h>
int main()
{
	char sent[1000];
	int i;
	printf("Enter sentence\n");
	gets(sent);
	for(i=0;sent[i];i++)
	{
	if(sent[i]>='A' && sent[i]<='Z')
		sent[i]=sent[i]+32;
		
	}
if(sent[0]>='a' && sent[0]<='z' )
	sent[0]=sent[0]-32;
		
	for(i=1;sent[i];i++)
	{
		if(sent[i]==' '){
		if(sent[i+1]>='a' && sent[i+1]<='z' )
	sent[i+1]=sent[i+1]-32;
			}
			}
			printf("%s is string",sent);
			}
