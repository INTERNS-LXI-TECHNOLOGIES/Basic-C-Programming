#include<stdio.h>
void main()
{
int n,sqrd;
printf("\n Enter the number to be squared \n");
scanf("%d",&n);
sqrd=n*n;
printf("\n The squared value is %d \n",sqrd);
if (sqrd<180)
{
printf("\n The squared value is less than 180 \n");
}
else{
printf("\n The value is greater than 180 \n");
}
}
