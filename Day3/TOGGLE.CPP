#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
int i;
char a[20];
clrscr();
printf("\n enter the string: ");
gets(a);
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
printf("\n the toggled string is: %s",a);
getch();
}
