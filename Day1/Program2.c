#include<stdio.h>

#include<conio.h>

void main()

{

int a,b,c,d,large;

printf("Enter the value of a:");

scanf("%d",&a);
printf("Enter the value of b:");

scanf("%d",&b);

printf("Enter the value of c:");

scanf("%d",&c);

printf("Enter the value of d:");

scanf("%d",&d);

large=(a>b)?(a>c)?(a>d)?a:d:(c>d)?c:d:(b>c)?(b>d)?b:d:(c>d)?c:d;

printf("Largest number is %d",large);

getch();

}
