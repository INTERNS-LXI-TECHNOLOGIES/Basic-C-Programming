#include <stdio.h>
void main()
{
	int i,n,x ;
	for(i=2; i<=n ; i++);
	{
		for (x=2; x<=i; x++);
		{
			if(i%x==0)
			{
				break;
			}
		}
		if (i==x)
		{
			printf("%d \n",i);
		}
	}	

}