/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    int num=199;
    printf("\n odd numbers between 200 and 6 :");
     if(num%2==0)
     {
    while(num>6)
      {
        printf("\n %d",num);
        num=num-2;
    }
    }
    return(0);
    
 
}




