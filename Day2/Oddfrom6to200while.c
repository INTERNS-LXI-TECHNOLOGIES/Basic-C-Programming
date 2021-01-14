#include<stdio.h>
int main()
{
    int i;
    printf("\n Odd numbers between 6 & 200 using for loop : \n");
   
    int a=7;
    printf("\n\n Odd numbers between 6 & 200 using while loop : \n");
     
    while (a <= 200)
    {  
        printf("%d, ", a);
        a = a + 2;  
    }  
    
    return 0;  
} 
