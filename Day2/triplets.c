#include<stdio.h>
int main()
{
    int a,b,x,y,z;
    printf("Enter the rangefor Pythagorean Triplets: ");
    scanf("%d%d",&a,&b);
    printf("The Pythogorean Triplets in the given range are as follows:\n____________________________________________________________\n");
    for(x=a;x<=b;x++)
	{
        for(y=x;y<=b;y++)
	   {
            for(z=y;z<=b;z++)
		{
                if(z*z==x*x+y*y)
		   {
                    printf("%d , %d , %d\n",x,y,z);
                }
            }
        }
    }
}

