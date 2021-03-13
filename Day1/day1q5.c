#include <stdio.h>
int main()
{
float sales,commission;
	char no_commission,wrong_entry;
	printf("Enter sales figure of the Employee\n");
	scanf("%f",&sales);
	commission=(sales<10000)?printf("no_commission"):(sales>=10000 && sales <30000)?(0.15*sales):(sales>=30000)?(0.25*sales+1000):wrong_entry;
	printf("%.2f is the commission",commission);
	}
