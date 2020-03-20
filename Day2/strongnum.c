#include<stdio.h>
main()
{
	int cur,a,i,j,num,fact=1,last=0,sum;
  for(i=100; i<=1000; i++)
    {
        num = i;
        sum = 0;
        while(num > 0)
        {
            fact = 1;
            last=num%10;
            for( j=1; j<=last; j++)
            {
                fact = fact * j;
            }

            sum += fact; 

            num /= 10;
        }
        if(sum == i)
        {
            printf("%d, ", i);
        }
    }
}
	
	
