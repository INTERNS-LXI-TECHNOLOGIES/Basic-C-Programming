/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
.Program to count the search number included in an array..
*******************************************************************************/

#include<stdio.h>
int main ()
{
    int a[20],i,limit,flag=0,count=0,n;
  printf("enter the limit:");
  scanf("%d",&limit);
  printf("enter the numbers:");
  for(i=0;i<limit;i++)
  {
      scanf("%d",&a[i]);
  }
  printf("enter the item to be searched:");
  scanf("%d",&n);
  for(i=0;i<limit;i++)
  {
  if(a[i]==n)
  {
      flag=1;
      count++;
  }
  }
  if(flag==1)
  {
      printf("%d is found in %d times",n,count);
  }
  else
  {
      printf("%d is not found",n);
  }
  
 return 0;  
} 



