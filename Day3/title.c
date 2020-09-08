#include<stdio.h>
#include<string.h>
void main()
{
int i;
char a[20];
printf("\n enter the string: ");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[0]>='a' && a[0]<='z')
{
a[i]=a[i]-32;
}
else if(a[i-1]>='A' && a[i]<='Z')
{
a[i]=a[i]+32;
}
}
printf("\n the titled string is %s",a);
}
