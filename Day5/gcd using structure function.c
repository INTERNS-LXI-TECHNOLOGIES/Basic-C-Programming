/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
struct mat 
{
    int n1;
    int n2;
    int num;
    int deno;
    int rem
};
void gcd(struct mat m);
int main()
{
    struct mat m;
    m.n1=100;
    m.n2=15;
    gcd(m);
    return 0;
}
void gcd(struct mat m)
{
    
    if(m.n1>m.n2)
     {
      m.num=m.n1;
      m.deno=m.n2;
     }
     else
     {
      m.num=m.n2;
      m.deno=m.n1;
     }
       m.rem=m.num%m.deno;
       while(m.rem!=0)
       {
      m.num=m.deno;
      m.deno=m.rem;
      m.rem=m.num%m.deno;
      }
      printf("GCD of %d and %d is %d",m.n1,m.n2,m.deno);
}

