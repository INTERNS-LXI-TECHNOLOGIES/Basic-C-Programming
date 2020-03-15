#include<stdio.h>
#include<conio.h>
void main()
{
	int year,month,days,hour,minutes,seconds,choice;
	printf("enter a year");
	scanf("%d",&year);
	printf("enter your choice(1=month,2=days,3=hours,4=minutes,5=seconds)");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
		month=	year*12	;
		printf("the number of months are %d",month);
		break;	
		case 2:
			
				days==year*12*30;
				printf("the number of days are %d",days);
				break;
			case 3:
				
					hour=year*12*30*24;
					printf("the number of hours are %d",hour);
					break;
				  	
				
				case 4:
					
						minutes=year*12*30*24*60;
						printf("the number of mintes are %d",minutes);
						break;
						
					
					case 5:
						
							seconds=year*12*30*24*60*60;
							printf("the number of seconds are %d",seconds);
							default:
								printf("invalid value");
							
						
				
		
	
	}


}
