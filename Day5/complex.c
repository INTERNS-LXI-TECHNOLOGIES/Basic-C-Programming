/*7.	Declare add structure to represent add complex number
	( add number having real and imaginary part).

	Write function to add and multiply two complex numbers*/

#include <stdio.h>

struct  complex_number { int real, imaginary; };
    

struct complex_number addition ( struct complex_number, struct complex_number );
struct complex_number multiplication ( struct complex_number, struct complex_number );
void display ( struct complex_number );

void main()
{
    struct complex_number c1;
    struct complex_number c2;
    struct complex_number add;
    struct complex_number mul;
    
    printf("\n\nEnter 2 Complex numbers");

    printf("\n\n   Number 1\n\n");
    printf("Real   : ");
    scanf("%d", &c1.real);
    printf("Img    : ");
    scanf("%d", &c1.imaginary);

    printf("\n\n   Number 2\n\n");
    printf("Real   : ");
    scanf("%d", &c2.real);
    printf("Img    : ");
    scanf("%d", &c2.imaginary);
    
    printf("\n Sum      =    ");
        printf("( %d + %di ) + ",c1.real, c1.imaginary);
        printf("( %d + %di ) =",c2.real, c2.imaginary);
    
    add = addition ( c1, c2 );
    display(add);

    printf("\n\n Product  =    ");
        printf("( %d + %di ) * ",c1.real, c1.imaginary);
        printf("( %d + %di ) =",c2.real, c2.imaginary);
    mul = multiplication ( c1, c2 );
    display(mul);

    printf("\n\n");
}

struct complex_number addition ( struct complex_number c1, struct complex_number c2 )
{
    struct complex_number s;
    s.real = c1.real + c2. real;
    s.imaginary = c1.imaginary + c2.imaginary;
    return s;

    // printf(" %d + %di", s.real, s.imaginary);  
}

struct complex_number multiplication ( struct complex_number c1, struct complex_number c2 )
{  
    struct complex_number m;
    m.real = ( c1.real * c2.real ) - ( c1.imaginary * c2.imaginary );
    m.imaginary = ( c1.real * c2.imaginary ) + ( c1.imaginary * c2.real );
    return m;

    // printf(" %d + %di \n\n", mul.real, mul.imaginary);
}

void display  ( struct complex_number complex )
{
    printf(" %d + %di ",complex.real,complex.imaginary);      
}