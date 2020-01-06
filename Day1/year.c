#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void main()
{
	int c,y,h,s,m,yts,yth,ytmo,ytm,ytd;
printf("1.year to minute\n2.year to hour\n3.year to month\n4.year to day\n5.year to seconds\nEnter your choice:");
scanf("%d",&c);
switch(c)
{
	case 1:printf("Enter no.of year:");
			scanf("%d",&y);
			ytm = y*365*24*60;
			printf("%d",ytm);
			break;
	case 2:printf("Enter no.of year:");
			scanf("%d",&y);
			yth = y*365*24;
			printf("%d",yth);
			break;
	case 3:printf("Enter no.of year:");
			scanf("%d",&y);
			ytmo = y*12;
			printf("%d",ytmo);
			break;
	case 4:printf("Enter no.of year:");
			scanf("%d",&y);
			ytd = y*365;
			printf("%d",ytd);
			break;
	case 5:printf("Enter no.of year:");
			scanf("%d",&y);
			yts = y*365*24*60*60;
			printf("%d",yts);
			break;
	default:printf("invalid case");
}
}	
	
  