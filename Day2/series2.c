#include<stdio.h>
#include<math.h>
main()
{
	float x,sum=1,n,i,j,f=1,power,res ;
	printf("\n Enter the values of x and n\n");
	scanf("%f%f",&x,&n);
	if(n==1)
		{
			printf("\n Sum of %f terms = 1",n);
		}
	else
	{
	
		for (i=1;i<n;i++)
		{
			
			f=1;
			power=1;
			res=1;
			for(j=1;j<=i;j++)
			{
				f*=j;
			}
			power=pow(x,(2*i)-1);
			res=power/f;
			sum+=res;
		}
		printf("\n Sum of %f terms = %f",n,sum);
}
}
