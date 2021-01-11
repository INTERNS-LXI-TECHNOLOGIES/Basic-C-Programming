#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,sum,sub,mult,divi,rem;
    int operator;
    printf("\n 1-Addition:");
    printf("\n 2-Subtraction:");
    printf("\n 3-Multiplication:");
    printf("\n 4-Division:");
    printf("\n 5-Reminder:");
    printf("\n Enter the values of a & b: ");
    scanf("%d %d",&a,&b);
    printf("Enter your Choice : ");
    scanf("%d",&operator);
    switch(operator)
    {
    case 1	:
        sum=a+b;
        printf("Sum=%d",sum);
        break;
    case 2	:
        sub=a-b;
        printf("Subtraction=%d",sub);
        break;
    case 3	:
        mult=a*b;
        printf("Multiplication=%d",mult);
        break;
    case 4	:
        divi=a/b;
        printf("Division=%d",divi);
        break;
    case 5:
        rem=a%b;
        printf("Reminder=%d",rem);
        break;
    default	:
        printf(" Enter Correct Choice");
        break;
    }
    return 0;
}