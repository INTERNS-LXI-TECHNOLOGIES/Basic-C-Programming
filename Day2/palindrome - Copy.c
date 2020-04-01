#include<stdio.h>
#include<conio.h>
void main()
{
	int x,temp,r,s=0;
	printf("enter the number");
	scanf("%d",&x);
	x=temp;
	while(x<0);
	{
		r=x%10;
		x=x/10;
		s=(r*10)+r;
	}
	if(r=temp)
	{
	printf("the value entered is a palindrome");
    }
    else
    {
    printf("the value is not a palindrome");
    printf("the value of sum is %d",s );
    printf("the value of temp is %d",temp);
	}
}
