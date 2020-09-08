#include<stdio.h>
#include<string.h>
void main()
{
int i;
char a[20];
printf("\n enter the string");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>='a' && a[i]<='z')
{
a[i]=a[i]-32;
}
else if(a[i]>='A' && a[i]<='Z')
{
a[i]=a[i]+32;
}
}
printf("\n the toggle value is %s",a);
}
