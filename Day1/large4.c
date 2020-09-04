#include<stdio.h>
void main()
{
int a,b,c,d;
printf("enter four numbers");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a>b)
{
if(a>c)
{
if(a>d)
printf("%d largest is",a);
else
printf("%d largest is",d);
}
else
{
if(c>d)
printf("%d largest is",c);
else
printf("%d largest is",d);
}}
else
{
if(b>c)
{
if(b>d)
printf("%d largest is",b);
else
printf("%d largest is",d);
}
else
{
if(c>d)
printf("%d largest is",c);
else
printf("%d largest is",d);}
}}
