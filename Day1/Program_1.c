#include<stdio.h>
#include<conio.h>
int main()
{
    int day,year,week,month,hour,minute,choice;
    printf("\n 1-Year to month conversion:");
    printf("\n 2-Year to week conversion:");
    printf("\n 3-Year to Day conversion:");
    printf("\n 4-Year to hour conversion:");
    printf("\n 5-Year to minute conversion:");
    printf("\n Enter Year to convert:");
    scanf("%d",&year);
    printf("\n Enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        month=year*12;
        printf("month=%d",month);
        break;
        case 2:
        week=(year*12)/4;
        printf("week=%d",week);
        break;
        case 3:
        day=year*365;
        printf("day=%d",day);
        break;
        case 4:
        hour=year*(24*365);
        printf("hour=%d",hour);
        break;
        case 5:
        minute=year*(24*365)*60;
        printf("minute=%d",minute);
        break;
        default:
        printf("INVALID");
    }
        return 0;
}