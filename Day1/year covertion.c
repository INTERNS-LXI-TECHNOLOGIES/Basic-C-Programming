#include <math.h>
#include<stdio.h>
void main()
{
   float year;
   double month,day,hour,minutes,seconds;
   char ch;
   printf("enter the year :");
   scanf("%f" ,&year);
   printf("1.month \n 2.day \n 3.hour \n 4.min \n 5. sec \n ");
   printf("enter your choice");
   scanf("%d",&ch);
   switch(ch)
   {
       case 1:
       month=year*12;
       printf("month is %.2lf " ,month);
       break;
       case 2:
       day=year*365;
       printf("days is %.2lf " ,day);
       break;
       case 3:
       hour=year*365*24;
       printf("hours is %.2lf " ,hour);
       break;
       case 4:
       minutes=year*365*24*60;
       printf("minutes is %.2lf " ,minutes);
       break;
       case 5:
       seconds=year*365*24*60*60;
       printf("seconds is %.2lf " ,seconds);
       break;
       default:
       printf("invalid choice");
       
       
   }
}