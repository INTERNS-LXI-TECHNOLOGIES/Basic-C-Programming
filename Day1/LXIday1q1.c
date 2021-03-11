#include <stdio.h>
int main()
{
	printf("\n\n*******Program to convert years into minutes or hours or days or months or seconds********\n\n");
int years;
printf("enter no of years");
scanf("%d",&years);
printf("\n\n now please enter \n\n");
printf("\n1 to convert years into minutes \n");
printf("\n2 to convert years into hours \n");
printf("\n3 to convert years into days \n");
printf("\n4 to convert years into months \n");
printf("\n5 to convert years into secounds \n");

int a=525600;
int b=8760;
int c=365;
int d=12;
long int e=31536000;

int year;
scanf("%d",&year);
switch(year)
{
	case 1:
	printf("%d no of minutes",years*a);
	break;

	case 2:
	printf("%d no of hours ",years*b);
	break;

	case 3:
	printf("%d no of days ",years*c);
	break;

	case 4:
	printf ("%d no of months ",years*d);
	break;

    case 5:
	printf("%ld no of seconds ",years*e);
	break;

//	default:
//	printf("wrong entery");
//	break;




}
return 0;
} 
