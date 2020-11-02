/*7.	Declare a structure to represent a complex number
	( a number having real and imaginary part).

	Write function to add and multiply two complex numbers*/

#include <stdio.h>

struct  complex3 { int real, imaginary;
    struct complex1 { int real1, imaginary1 ;}x;
    struct complex2 { int real2, imaginary2 ;}y; 
}calc;

void add ( struct complex1, struct complex2 );
void mul ( struct complex1, struct complex2 );
void display ( struct complex1, struct complex2, struct complex3 );

void main()
{
    struct complex1 x;
    struct complex2 y;
    struct complex3 z;
    
    printf("\n\nEnter 2 Complex numbers");

    printf("\n\n   Number 1\n\n");
    printf("Real   : ");
    scanf("%d", &x.real1);
    printf("Img    : ");
    scanf("%d", &x.imaginary1);

    printf("\n\n   Number 2\n\n");
    printf("Real   : ");
    scanf("%d", &y.real2);
    printf("Img    : ");
    scanf("%d", &y.imaginary2);
    
    display( x, y, z );
}

void add ( struct complex1 x, struct complex2 y )
{
    calc.real = x.real1 + y. real2;
    calc.imaginary = x.imaginary1 + y.imaginary2;
    printf(" %d + %di", calc.real, calc.imaginary);  
}

void mul ( struct complex1 x, struct complex2 y )
{  
    calc.real = ( x.real1 * y.real2 ) - ( x.imaginary1 * y.imaginary2 );
    calc.imaginary = ( x.real1 * y.imaginary2 ) + ( x.imaginary1 * y.real2 );
    printf(" %d + %di \n\n", calc.real, calc.imaginary);
}

void display  ( struct complex1 x, struct complex2 y, struct complex3 z )
{
    printf("\n Sum \n ");
    printf("( %d + %di ) + ",x.real1,x.imaginary1);
        printf("( %d + %di ) =",y.real2,y.imaginary2);
            add ( x, y );

    printf("\n\n");

    printf("\n Product \n ");
    printf("( %d + %di ) * ",x.real1,x.imaginary1);
        printf("( %d + %di ) =",y.real2,y.imaginary2);    
            mul ( x, y );   
}