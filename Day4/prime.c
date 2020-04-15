#include<stdio.h>
 
int prime(int);
 
main()
{
   int n, result;
 
   printf("Enter an integer.\n");
   scanf("%d",&n);
 
   result =prime(n);
 
   if ( result == 1 )
      printf("%d is prime.\n", n);
   else
      printf("%d is not prime.\n", n);
 
 }
 
int prime(int a)
{
   int c;
 
   for ( c = 2 ; c <= a - 1 ; c++ )
 
      if ( a%c == 0 )
     
 
}
 
