#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,l;
	printf("enter the numbers out of which you have to find greatest");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	l=((a>b) && (a>c) && (a>d)?a:(b>c) && (b>d)?b:(c>d)?c:d);
    
     

    	printf("The largest number is %d" ,l);
	
    
}
