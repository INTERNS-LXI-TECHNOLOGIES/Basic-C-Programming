/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*..//******************************************************************************/

#include <stdio.h>

int main()
{
 int n1,n2,n3,n4,l1,l2,max;
 printf("enter n1 \t\n n2 \t\n n3 \t\n n4 \t\n");
 scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
 l1=(n1>n2)?n1:n2;
 l2=(l1>n3)?l1:n3;
 max=(l2>n4)?l2:n4;
 printf("largest is %d",max);
    return 0;
 }
