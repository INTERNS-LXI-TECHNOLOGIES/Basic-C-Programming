#include<string.h>
#include<stdio.h>
#include<conio.h>
void main()
{
char a[20], b[20];
clrscr();
printf("\n enter a string : ");
gets(a);
strcpy(b,a);
strrev(b);
if(strcmp(a,b)==0)
{
printf("\n the string is palindrome ");
}
else
{
printf("\n the string is not palindrome ");
}
getch();
}

