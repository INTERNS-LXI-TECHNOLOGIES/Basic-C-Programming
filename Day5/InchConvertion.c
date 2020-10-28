#include<stdio.h>
float inch_to_feet(float);
float inch_to_inch(float);
int main(){
    float inch,feet,in;
    printf("Enter the inch ");
    scanf("%f",&inch);
    feet = inch_to_feet(inch);
    printf("%f  feet  ",feet);
    in = inch_to_inch(inch);
    printf("%f  inch",in);
}
float inch_to_feet(float inch){
    float feet;
    feet = inch*0.833333;
    return feet;
}
float inch_to_inch(float inch){
    float in;
    in = inch*1;
    return in;
}