#include <stdio.h>
int gcd(int x, int y);

int main()
{
    int Num1, Num2;

    printf("Enter two integer Values \n");
    scanf("%d %d", &Num1, &Num2);

    printf("GCD of %d and %d is = %d", Num1, Num2, 	gcd(Num1, Num2));
    return 0;
}
int gcd(int x, int y) 
{
	if (x == 0) 
	{
  		return y;
  	}
 	while (y != 0)
	 {
    	if (x > y) {
      		x = x - y;
         }
    	else
	 {
      		y = y - x;
    	}
 	}
  	return x;
}
