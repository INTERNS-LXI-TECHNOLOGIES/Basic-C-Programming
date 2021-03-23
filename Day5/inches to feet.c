/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
Program to convert entered inches into equivalent feet and inches using function.
*******************************************************************************/
#include<stdio.h>
struct st 
{
    float inches;
};
void conv(struct st s);
int main()
{
    struct st s;
    s.inches=32.00;
    conv(s);
    return 0;
}
void conv(struct st s)
{
   float feet,even_feet,f=0.67;
   int rem,ev;
   feet = s.inches/12.00;
   even_feet= feet-f;
   ev =(even_feet* 12)+1;
   rem=s.inches-ev;
  printf("%.2f inches = %.2f feet %d inches",s.inches,feet,rem);
}


