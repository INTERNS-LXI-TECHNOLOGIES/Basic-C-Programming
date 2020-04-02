// Program to Add and Multiply two Complex numbers.

#include<stdio.h>


struct Complex
{
    int r,i ;
};

struct Complex Add(struct Complex a,struct Complex b) ;

struct Complex Multiply(struct Complex a,struct Complex b) ;

int main()
{
    struct Complex c1,c2 ;
    int op;

    printf(" \n Input Details of 1st Complex Number : \n \n Real Part : ") ;
    scanf("%d",&c1.r) ;
    printf(" \n Imaginary Part : ") ;
    scanf("%d",&c1.i) ;

    printf(" \n Input Details of 2nd Complex Number : \n \n Real Part : ") ;
    scanf("%d",&c2.r) ;
    printf(" \n Imaginary Part : ") ;
    scanf("%d",&c2.i) ;

    printf(" \n Choose Arithmetic Operation : \n \n (1) Add \n (2) Multiply \n \n : ") ;
    scanf("%d",&op) ;

    if(op==1)
        Add(c1,c2) ;
    else if(op==2)
        Multiply(c1,c2) ;
    else
        printf("\n \n Invalid Chioce. \n \n") ;

}

struct Complex Add(struct Complex a,struct Complex b)
{
    struct Complex sum ;

    sum.i = a.i + b.i ;
    sum.r = a.r + b.r ;

    printf("\n \n (%d + %di) + (%d + %di) = (%d + %di)",a.r,a.i,b.r,b.i,sum.r,sum.i) ;
}

struct Complex Multiply(struct Complex a,struct Complex b)
{
    struct Complex mul ;

    //Multiplication Rule: (a + bi) • (c + di) = (ac - bd) + (ad + bc)i

    mul.i = (a.r*b.i) + (a.i*b.r) ;
    mul.r = (a.r*b.r) - (a.i*b.i) ;

    printf("\n \n (%d + %di) x (%d + %di) = (%d + %di)",a.r,a.i,b.r,b.i,mul.r,mul.i) ;
}

