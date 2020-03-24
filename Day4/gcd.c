#include<stdio.h>
void gcd(int a,int b)
{
	int i,gcd;
	for(i=1;(i<=a&&i<=b);++i)
    {
        
        if(a%i==0 && b%i==0)
            gcd = i;
    }
    printf("GCD(%d,%d) = %d",a,b,gcd);
}
main()
{
	int n1, n2, i;
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);
    gcd(n1,n2);
    
}
