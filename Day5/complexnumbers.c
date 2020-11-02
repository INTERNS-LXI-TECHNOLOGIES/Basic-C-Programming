#include<stdio.h>
struct complex_number{
    float real;
    float imaginary;
};
struct complex_number addcomplex(struct complex_number,struct complex_number);
void display(struct complex_number);
struct complex_number multiplycomplex(struct complex_number,struct complex_number);
void main(){
    struct complex_number num1;
    struct complex_number num2;
    struct complex_number add;
    struct complex_number mul;
    printf("\nEnter the real and imaginary part of first number ");
    scanf("%f %f",&num1.real,&num1.imaginary);
    printf("\nEnter the real and imaginary part of second number ");
    scanf("%f %f",&num2.real,&num2.imaginary);
    printf("\nThe sum of the complex numbers : ");
    add = addcomplex(num1,num2);
    display(add);
    printf("\nThe product of complex number is : ");
    mul = multiplycomplex(num1,num2);
    display(mul);
}
struct complex_number addcomplex(struct complex_number num1,struct complex_number num2){
    struct complex_number a;
    a.real = num1.real  + num2.real;
    a.imaginary = num1.imaginary + num2.imaginary;
    return a;
}
struct complex_number multiplycomplex(struct complex_number num1,struct complex_number num2){
    struct complex_number m;
    m.real = (num1.real*num2.real)-(num1.imaginary*num2.imaginary);
    m.imaginary = (num1.real*num1.imaginary)+(num2.real*num2.imaginary);
    return m;
}
void display(struct complex_number c){
    printf("%f + %f i",c.real,c.imaginary);
}