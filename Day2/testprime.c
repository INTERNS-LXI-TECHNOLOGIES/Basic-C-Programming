#include <stdio.h> 
void main() {
int num1, num2, lcm, check =1;    
printf("Enter 2 numbers\n");  
scanf("%d%d", &num1, &num2);  
lcm = (num1 > num2) ? num1 : num2;  
while(check)  
{  
if(lcm % num1 == 0 && lcm % num2 == 0)  
{  
printf("LCM of %d and %d is %d\n", num1, num2, lcm);  
check = 0;  
}  
lcm++;  
}   
}    
