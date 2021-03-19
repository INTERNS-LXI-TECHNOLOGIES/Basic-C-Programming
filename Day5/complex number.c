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
   float r1;
   float i1;
   float r2;
   float i2;
};
void add(struct complex c);
void multi(struct complex c);
void main()
{
    struct complex c;
    printf("1st complex number..");
    printf("enter real and imaginary parts :\n");
    scanf("%f %f",&c.r1,&c.i1);
    printf("2nd complex number..");
    printf("enter real and imaginary parts: \n");
    scanf("%f %f",&c.r2,&c.i2);
    add(c);
    multi(c);
}
void add(struct complex c)
{
    int real,imag;
    real=c.r1+c.r2;
    imag=c.i1+c.i2;
    printf("sum =%d+%di\n",real,imag);
}
void multi(struct complex c)
{
    int a,b,pro;
     a=((c.r1*c.r2)-(c.i1*c.i2));
     b=((c.r1*c.i2)+(c.i1*c.r2));
     pro=((c.r1*c.r2)-(c.i1*c.i2))+((c.r1*c.i2)+(c.i1*c.r2));
    printf("product=%d+%di\n",a,b,pro);
}
