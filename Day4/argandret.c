#include <stdio.h>

int greatnum(int,int);

void sum(int,int);

void num();

int number();

int main()

{

  int a,b,c,d;

  printf("Enter two numbers");
 
 scanf("%d%d",&a,&b);

 c=greatnum(a,b);

  printf("Greater Number is %d",c);

  sum(a,b);

  num();

  d=number();

  printf("Number is %d",d);

 
  
    return 0;

}

int greatnum(int p,int q)

{

    int l;

    if(p>q)
 
   {

    l=p;

    }
  
  else 
 
   {
 
       l=q;

    }
  
  return l;

}

void sum(int x,int y)

{
 
   int s;
 
   s=x+y;
 
   printf("Sum is %d",s);

    
}
void num()

{

    printf("hello");

}

int number()

{

    int x=100;

    return x;

}