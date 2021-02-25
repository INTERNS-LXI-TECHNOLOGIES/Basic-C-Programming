/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
int num,count=0;
printf("enter the number:");
scanf("%d",&num);
while(num>0)
{
    count++;
    num=num/10;
}
printf("number of digits:  %d",count);

 return 0;
}
