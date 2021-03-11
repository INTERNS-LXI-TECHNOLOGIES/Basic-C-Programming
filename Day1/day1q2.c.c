#include <stdio.h>
int main()
{
printf("***Program to find biggest number***");
int a,b,c,d,big;
printf("\nenter a\n");
scanf("%d",&a);
printf("\nenter b\n");
scanf("%d",&b);
printf("\nenter c\n");
scanf("%d",&c);
printf("\nenter d\n");
scanf("%d",&d);

big = a>=b&&a>=c&&a>=d?a:b>=c&&b>=d?b:c>=d?c:d;
//big=a>b&&a>c?a:b>c?b:c;
printf("%d is bigger",big);
}