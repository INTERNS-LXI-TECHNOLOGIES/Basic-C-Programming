#include<stdio.h>
struct complex_number1{
    float real;
    float imaginary;
};
struct complex_number2{
    float real;
    float imaginary;
};
struct output{
    float real;
    float imaginary;
};
struct output calc;
void addcomplex(struct complex_number1,struct complex_number2);
void multiplycomplex(struct complex_number1,struct complex_number2);
void main(){
    struct complex_number1 num1;
    struct complex_number2 num2;
    printf("\nEnter the real and imaginary part of first number ");
    scanf("%f %f",&num1.real,&num1.imaginary);
    printf("\nEnter the real and imaginary part of second number ");
    scanf("%f %f",&num2.real,&num2.imaginary);
    printf("\nThe sum of the complex numbers : ");
    addcomplex(num1,num2);
    printf("\nThe product of complex number is : ");
    multiplycomplex(num1,num2);
}
void addcomplex(struct complex_number1 num1,struct complex_number2 num2){
    calc.real = num1.real  + num2.real;
    calc.imaginary = num1.imaginary + num2.imaginary;
    printf("%f + %f i",calc.real,calc.imaginary);
}
void multiplycomplex(struct complex_number1 num1,struct complex_number2 num2){
    calc.real = (num1.real*num2.real)-(num1.imaginary*num2.imaginary);
    calc.imaginary = (num1.real*num1.imaginary)+(num2.real*num2.imaginary);
    printf("%f + %f i",calc.real,calc.imaginary);
}