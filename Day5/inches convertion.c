#include<stdio.h>
struct st 
{
    int inches;
    float feet;
};
void conv(struct st s);
int main()
{
    struct st s;
    printf("enter the inches: \n");
    scanf("%d",&s.inches);
    conv(s);
    return 0;
}
void conv(struct st s)
{
   s.feet=s.inches*0.0833333;
   printf("value of %d inches in feet is :%.2f\n",s.inches,s.feet);
   
}
