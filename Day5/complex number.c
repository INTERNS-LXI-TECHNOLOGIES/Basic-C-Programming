/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
Declare a structure to represent a complex number( a number having real and imaginary part).
Write function to add and multiply two complex numbers.
*******************************************************************************/
#include<stdio.h>
struct complex
{
    int real;
    int imag;
};
void add(struct complex co1 , struct complex co2);
void multi(struct complex co1 , struct complex co2);
int main()
{
   struct complex co1;
   struct complex co2;
   co1.real=23;
   co1.imag=15;
   co2.real=13;
   co2.imag=15;
   add(co1,co2);
   multi(co1,co2);
   return 0;
}
void add(struct complex co1 , struct complex co2)
{
    int real,imag;
   real= co1.real+co2.real;
   imag= co1.imag+co2.imag;
   printf("sum: %d+%di \n",real,imag);
}
void multi(struct complex co1, struct complex co2)
{
    int a,b,pro;
    a= ((co1.real*co2.real)-(co1.imag*co2.imag));
    b=((co1.real*co2.imag)+(co1.imag*co2.real));
    pro=a+b;
    printf("product=%d+%di\n",a,b,pro);
}
