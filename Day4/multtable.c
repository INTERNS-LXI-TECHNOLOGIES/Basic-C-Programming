#include<stdio.h>
void tables(int);  
  
int main()  
{  
    int num;  
  
    printf("Enter a number\n");  
    scanf("%d", &num);  
  
    printf("\nMultiplication Table for %d is:\n", num);  
  
    tables(num); 
    printf("%d",num) ;
  
}  
  
void tables(int a)  
{  
    int count;
    int mult;  
  
    for(count = 1; count <= 10; count++)  
    {  
    mult=a*count;
   // printf("%d x %d = %d\n", a, count, a*count);  
    } return mult; 
} 
