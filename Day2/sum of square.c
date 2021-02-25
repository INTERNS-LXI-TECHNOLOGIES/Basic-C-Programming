/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//.To find the sum of squares of first n natural numbers. User gives n.//
#include <stdio.h>
void main()
{
    int i=1,limit,sum=0;
    printf("limit:");
    scanf("%d",&limit);
    
    while(i<=limit)
    {
      
    sum=sum+(i*i);
    i++;
        
    }
    printf("sum of square of first n natural numbers is %d",sum);
    
 
}
