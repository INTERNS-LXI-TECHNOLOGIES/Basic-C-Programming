#include<stdio.h>

int main(){
    int year;
    int min;
    int hrs;
    int day;
    int mnts;
    long sec;

    printf("Enter the number of years : ");
    scanf("%d",&year);
    int convert_to;
    printf("\nConvert year to : \n1:Minutes \n2:hours \n3:days \n4:month \n5:seconds  ");
    scanf("%d",&convert_to);
    switch(convert_to)
    {
        case 1:
        min = year*525600;
        printf("%d""\n1:Minutes = ",min);
        break;
        case 2:
        hrs = year*8760;
        printf("%d""\n2:hours = ",hrs);
        break;
        case 3:
        day = year*365;
        printf("%d""\n3:days = ",day);
        break;
        case 4:
        mnts = year*12;
        printf("%d""\n4:months = ",mnts);
        break;
        case 5:
        sec = (year*mnts)*60;
        printf("%d""\n5:seconds = ",sec);
        break;
        default:
        printf("\nError in the option");      

    }
    return 0;
    
}






