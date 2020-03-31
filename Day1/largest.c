#include <stdio.h> 
  
int main() 
{ 
        int a,b,c,d,max; 
		printf("Enter 4 numbers ::"); 
		scanf("%d%d%d%d",&a,&b,&c,&d); 
      
      max = (a > b && a > c && a > d) ?  
                                   a :  
                                     ((b > c && b > d) ?  
                                                         b :  
                                                          (c > d ? b : d)); 
      
      printf("Largest number among %d, %d, %d and %d is %d.", 
                                         a, b, c, d, max); 
  
    return 0; 
} 