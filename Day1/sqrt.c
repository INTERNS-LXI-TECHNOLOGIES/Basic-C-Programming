#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void main()
{

	int n,res;
  printf("Enter a number:");
  scanf("%d",&n);
  if(n<180)
  {
  	res = sqrt(n);
  }
  printf("%d",res);
}	
	
  