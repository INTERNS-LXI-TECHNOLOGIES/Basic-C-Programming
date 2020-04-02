// Program to Convert Inches to Feet and inches.

#include <stdio.h>

void convert(int i) ;

int main()
{
    int in ;

    printf(" \n Input Measurement in Inches : ") ;
    scanf("%d",&in) ;

    convert(in) ;

}

void convert(int i)
{
    int f,in ;

    f = i/12 ;
    in = i%12 ;

    printf("\n \n %d inches = %d feet and %d inches.",i,f,in) ;
}

