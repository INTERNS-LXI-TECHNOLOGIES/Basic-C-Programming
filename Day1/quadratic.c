#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void main()
{
  double n,a,b,c,root,x1,x2,real,img;
  
   printf("Enther the value of a,b,c=");
   scanf ("%lf %lf %lf",&a,&b,&c);
   
    n = b*b-4*a*c;
    printf("%lf\n",n);
    
     if(n>0)
       {
       	 x1 = (-b+sqrt(n))/(2*a);
       	 x2 = (-b-sqrt(n))/(2*a);
       	 printf("x1 = %.2lf \n",x1);
    	printf("\n x2 = %.2lf",x2);
       	 
	   }
	 else if(n==0)
	   {
	   	
	   	x1 = x2 = -b/(2*a);
	   	printf("x1 = %.2lf\n",x1);
	   	printf("x2 = %.2lf",x2);
	   	 
	   }  
	   else
	   {
	   	 real = -b/(2*a);
	   	 img = sqrt(-n)/(2*a);
	   	printf("x1 = %.2lf+%.2lfi\n",real,img);
	   	printf("x2 = %.2lf+%.2lfi",real,img);
	   	 
	   }
	   
	   
}	
	
  