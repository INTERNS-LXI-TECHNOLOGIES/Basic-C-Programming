#include<stdio.h>
#include<conio.h>
int main()
{
   int i, num, p = 0;
   printf("Enter a number: \n");
   scanf("%d", &num);
   for(i=1; i<=num; i++)
   {
      if(num%i==0)
      {
         p++;
      }
   }
   if(p==2)
   {
      printf("Entered number is prime number",num);
   }
   else
   {
      printf("Entered number is prime number",num);
   }
}