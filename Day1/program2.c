#include<stdio.h>
void main()
{
	int x,y,z,a,b;

	printf("\n Enter Four Numbers");
	scanf("%d%d%d%d",&x,&y,&z,&a,&b);
	
	b=x>y?x:y;
	b=b>z?b:z;
	b=b>a?b:a;
	
	printf("\n Large number is %d",b)

}