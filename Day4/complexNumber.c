#include <stdio.h>
#include <stdlib.h>
struct complex
{
	int real,img;
};

void main()
{
	int ch;
	struct complex a,b,c;
	printf("1.add\n2.multiply\nenter ur choice\n");
	scanf("%d",&ch);
	printf("First complex number:\n");
	scanf("%d",&a.real);
	scanf("%d",&a.img);
	
	printf("second complex number:\n");
	scanf("%d",&b.real);
	scanf("%d",&b.img);
	
	
	if(ch==1)
	{
		c.real = a.real+b.real;
		c.img = a.img +b.img;
		if(c.img>=0)
		{
			printf("sum=%d +i %d",c.real,c.img);
		}
	}
	else if(ch==2)
	{
		c.real = a.real*b.real -a.img*b.img;
		c.img = a.img * b.real + a.real*b.img;
		if(c.img>=0)
		{
			printf("mutiply=%d +i %d",c.real,c.img);
		}
	}
}