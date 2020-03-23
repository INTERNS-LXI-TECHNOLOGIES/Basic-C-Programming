#include<stdio.h>
#include<math.h>
main()
{
	float x,sum=10,n,j,f=1,power,res ;
	int i;
	printf("\n Enter the values of x and n\n");
	scanf("%f%f",&x,&n);
	if(n==1)
		{
			printf("\n Sum of %f terms = 10",n);
		}
	else
	{
	
		for (i=2;i<=n;i++)
		{
			
			f=1;
			power=1;
			res=1;
			for(j=1;j<=i;j++)
			{
				f*=j;
			}
			power=pow(x,i);
			res=power/f;
			if(i%2==0)
			{
				sum=sum-res;
			}
			else
			{
				sum=sum+res;
			}
			
			
		}
		printf("\n Sum of %f terms = %f",n,sum);
}
}
