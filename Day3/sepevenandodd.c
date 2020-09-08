#include <stdio.h>
void main()
{
int a[10], even[10], odd[10],i,j=0,k=0,n;
printf("Enter the number of elements");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the %d element \n",i+1);
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if (a[i]%2 == 0)
{
even[j] = a[i];
j++;
}
else
{
odd[k] = a[i];
k++;
}
}
printf("\nThe Even elements \n");
for(i=0;i<j;i++)
{
printf("%d ",even[i]);
}
printf("\nThe Odd elements \n");
for(i=0;i<k;i++)
{
printf("%d ", odd[i]);
}
}
