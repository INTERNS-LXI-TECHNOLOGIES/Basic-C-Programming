#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main()
{

int i,j,k,lim,sum1=0,sum2=0,sum3=0;
printf("Enter the limit:\t");
scanf("%d",&lim);
for(i=1;i<=lim;i++)
	{
		sum1 = i*i;
		for(j=1;j<=lim;j++)
			{
				sum2 = j*j;
				for(k=0;k<=lim;k++)
					{
						sum3 = k*k;
										
						if(sum3 == sum1+sum2)
						{
							printf("%d %d %d \n",i,j,k);
						}
						
					}
	
			}
	}
		
		

}
