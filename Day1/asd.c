
#include<stdio.h>
void main()
{
	int yrs,mon,d,h,m,s,ch;
	printf("\n [1] MINUTES \n [2] HOURS \n [3] DAYS \n [4] MONTHS \n [5] SECONDS \n  Enter your Choice:");
	scanf ("%d", &ch);
	printf("Enter Years:");
	scanf("%d", &yrs);
	mon = yrs * 12;
	d = mon * 30;
	h = d * 24;
	m = h * 60;
	s = m * 60;
	switch(ch)
	{
		case 1: printf("\n Minutes : %d", m);
		break;
		case 2: printf(" \n Hours : %d", h);
		break;
		case 3: printf(" \n Days : %d", d);
		break;
		case 4: printf( " \n Months: %d", mon);
		break;
		case 5: printf(" \n Seconds : %d", s);
		break;
		default: printf(" \n Invalid Choice");
	}

}