#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
int i;
char ch[20],letters[20];
printf("enter the string");
scanf("%s",ch);
for(i=0;ch[i]!='\0';i++)
{
letters[i]=toupper(ch[i]);
}
letters[i]='\0';
printf("%s",letters);
}
