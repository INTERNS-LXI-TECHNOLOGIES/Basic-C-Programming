#include <stdio.h>
int main()
{
    int ex=0;
    while (ex<=10)
    {
	 if (ex==7)
	 {
	      ex++;  
	      break;
	 }
	 printf("%d",ex);
	 ex++;
    }
    return 0;
}