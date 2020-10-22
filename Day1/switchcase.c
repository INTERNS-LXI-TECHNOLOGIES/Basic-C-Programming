#include<stdio.h>

int main()
{
     int a,b,c,d,e;
     a=365;
     b=30;
     c=24;
     d=60;
     e=1;
     char choice;
    printf("\n Enter the choice to find \n\n 1. No.of Months \n 2. No.of Days \n 3. No.of Hours \n 4. No.of Minutes \n 5. No.of Seconds \n\n in a year. \n\n");
    scanf("%c",&choice);
    switch (choice)
    {
    case '1' :
        printf("No.of Months in a year is : %d",a/b);
        break;
    
    case '2' :
        printf("No.of Days in a year is : %d",a/e);
        break;
    
    case '3' :
        printf("No.of Hours in a year is : %d",a*c);
        break;

    case '4' :
        printf("No.of Minutes in a year is : %d",a*c*d);
        break;

    case '5' :
        printf("No.of Seconds in a year is : %d",a*c*d*d);
        break;  

    default :
        printf("Invalid input...!");
        break;
    }
    return 0;

}