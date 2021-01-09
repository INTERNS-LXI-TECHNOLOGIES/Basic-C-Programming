#include<stdio.h>
#include<conio.h> 
int main()
{
  float number,square;
  printf("Please Enter any integer Value:");
  scanf("%f",&number);
  square=number*number;
  if(square<180)
  {
     printf("Square of a given number is%f=%f",number,square);
  }
  else
{
    printf("NOT AVAILABLE");
}
  
  return 0;
}