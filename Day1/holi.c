#include<stdio.h>
main()
{
	int ch;
	printf("Enter the Number ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 0: printf("0 : Sunday");
		break;
		case 1: printf("1 : Monday");
			   break;
		case 2: printf("2 : Tues");
			   break;
		case 3: printf("3 : Wed");
			   break;
		case 4: printf("4 : Thursday");
			   break;
		case 5: printf("5 : Friday");
			   break;
		case 6: printf("6 : Saturday");
			   break;
		default : printf("Error");
				 
	
	}
}
