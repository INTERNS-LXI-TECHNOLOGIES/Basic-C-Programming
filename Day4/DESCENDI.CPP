#include<conio.h>
#include<stdio.h>
void descending(int a[5])
{
int i,j;
int temp=0;
for(i=0;i<5;i++)
{
for(j=i+1;j<5;j++)
{
if(a[i]<a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("\n the descending order of the array is: ");
for(i=0;i<5;i++)
{
printf(" %d",a[i]);
}
}
void main()
{
int a[5]={2,4,1,6,7};
clrscr();
descending(a);
getch();
}