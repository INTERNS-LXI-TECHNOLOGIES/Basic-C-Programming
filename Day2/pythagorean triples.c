#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z,i,j,initial,final;
	printf("enter the  initial limit");
	scanf("%d",&initial);
	printf("enter the final limit");
	scanf("%d",&final);
	printf("The pythagorean triples in the range are:");
	for(i=initial;i<=final;i++)
		{
		for(j=initial;j<=final;j++)
		{
			x=i*i-j*j;
            y=2*i*j;
            z=i*i+j*j;
            if(x>initial&&y>initial&&z>initial&&x<final&&y<final&&z<final)
            {
            	printf("%d, %d, %d\n",x,y,z);
			}
		}
		}
	}
