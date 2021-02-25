/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//.To print all odd numbers between 200 and 6 using both for loop and while loop.//
#include <stdio.h>
int main()
{
    int num=201;
    printf("\n odd numbers between 200 and 6 :");
    while(num>6)
    {
        num=num-3;
    
    
        printf("\n %d",num);
    }  
    return(0);
    
 
}
