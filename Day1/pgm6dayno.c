#include<stdio.h>
#include<conio.h>
void main()
{
	int day;
	printf("enter the day number(eg 0=sunday,1=monday)");
	scanf("%d",&day);
	switch(day)
	{
		case 0:
			printf("sunday");
			break;
			case 1:
				printf("monday");
				break;
				case 2:
					printf("tuesday");
					break;
					case 3:
						printf("wednesday");
						break;
						case 4:
							printf("thursday");
							break;
							case 5:
								printf("friday");
								break;
								case 6:
									printf("saturday");
									break;
									default:
										printf("invalid");
 }
}
