#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void main()
{
	int c,y,a;
	
	printf("1. year to min\n2. year to hour\n3. year to month\n4. year to second\n5.year to  days\n Enter the choise =  ");
	scanf("%d",&c);
	switch (c)
	{
	case 1:
	 printf("Enter the Year = ");
	 scanf("%d",&y) ;
	 a=y*365*24*60;
	 printf("min = %d",a);
    break;
	case 2:
	 printf("Enter the Year = ");
	 scanf("%d",&y) ;
	 a=y*365*24;
	 printf("hour = %d",a);
	break;
	case 3:
	 printf("Enter the Year = ");
	 scanf("%d",&y) ;
	 a=y*12;
	 printf("month = %d",a);
    break;
    case 4:
	 printf("Enter the Year = ");
	 scanf("%d",&y) ;
	 a=y*365*24*60*60;
	 printf("second = %d",a);
    break;
    case 5:
	 printf("Enter the Year = ");
	 scanf("%d",&y) ;
	 a=y*365;
	 printf("day = %d",a);
    break;
    default:printf("\nInvalid entery.....!");
   
}
}