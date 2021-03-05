/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
int main()
{
  int x,n,sum=0;
  
  printf("enter x and n:");
  scanf("%d %d",&x,&n);
    for(int i=1;i<=n;i++)
  {
          
           sum=sum+pow(x,i);
          
           
  }printf("sum:%d",sum);
  
    return 0;
}
