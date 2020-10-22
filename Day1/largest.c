#include<stdio.h>
int main()
{
    int a,b,c,d,e;

    printf("\n Enter the numbers");

    
    printf("\n\n Input the first number: "); 
    scanf("%d", &a);
    printf(" Input the second number: ");
    scanf("%d", &b);
    printf(" Input the third number: ");
    scanf("%d", &c);
    printf(" Input the fourth number: ");
    scanf("%d", &d);


    e = (a > b) ? a : b;
    e = (e > c) ? e : c;
    e = (e > d) ? e : d;

    printf("\n Largest number among %d, %d, %d, and %d is %d",a,b,c,d,e); 
  
    return 0; 
} 

