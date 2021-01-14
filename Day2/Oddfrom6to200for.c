#include<stdio.h>
int main()
{
    int i;
    printf("\n Odd numbers between 6 & 200 using for loop : \n");
   
    int a=7;
    printf("\n\n Odd numbers between 6 & 200 using while loop : \n");
     
    for ( i = 6; i < 200; i++)
    {
        if (i%2==1)
        {
            printf("%d, ", i);
           
        }
    }


  
    
    return 0;  
} 
