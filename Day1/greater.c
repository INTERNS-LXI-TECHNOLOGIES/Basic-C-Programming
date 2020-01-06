#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main()
{
	int a,b,c,d,x,y,z;
	printf("Enter four numbers:\n");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	x=a>b?a:b;
	y=c>d?c:d;
	z=x>y?x:y;
	printf("greater is %d",z);
}