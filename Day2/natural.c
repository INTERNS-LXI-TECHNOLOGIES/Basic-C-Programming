#include <stdio.h>
 
void main()
{
int i,n,sum;
printf("Enter a number \n");
scanf ("%d",&n);
for (i = 1; i<=n; i++)
{
sum=sum+i;
}
printf ("Sum of first %d natural number is %d\n", n,sum);
}
