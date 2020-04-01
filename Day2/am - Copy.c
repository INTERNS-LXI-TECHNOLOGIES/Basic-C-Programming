#include <stdio.h>
#include<conio.h>
void main()
 {
    int x, temp, r,sum = 0;
    printf("Enter a number ");
    scanf("%d", &x);
    temp = x;

    while (temp!= 0) 
	{
        r = temp % 10;
        sum += r*r*r;
        temp=temp/10;
    }

    if (sum==x)
        printf("%d is an Armstrong number",x);
    else
        printf("%d is not an Armstrong number",x);

    
}

