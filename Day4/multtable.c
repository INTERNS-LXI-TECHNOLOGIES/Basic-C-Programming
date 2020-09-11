#include<stdio.h>
void tables(int);  
  
int main()  
{  
    int num;  
  
    printf("Enter a number\n");  
    scanf("%d", &num);  
  
    printf("\nMultiplication Table for %d is:\n", num);  
  
    tables(num);  
  
    return 0;  
}  
  
void tables(int a)  
{  
    int count;  
  
    for(count = 1; count <= 10; count++)  
    {  
        printf("%d x %d = %d\n", a, count, a*count);  
    }  
} 
