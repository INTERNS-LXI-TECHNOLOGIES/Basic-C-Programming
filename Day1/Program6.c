#include<stdio.h>
#include<conio.h>
int main()
{
    int week;
    printf("Enter number of week:");
    scanf("%d", &week);
    switch(week)
    {
        case 1: 
            printf("SUNDAY");
            break;
        case 2: 
            printf("MONDAY");
            break;
        case 3: 
            printf("TUESDAY");
            break;
        case 4: 
            printf("WEDNESDAY");
            break;
        case 5: 
            printf("THURSDAY");
            break;
        case 6: 
            printf("FRIDAY");
            break;
        case 7: 
            printf("SATURDAY");
            break;
             default: 
            printf("Invalid input.....");
            break;
    }

    return 0;
}