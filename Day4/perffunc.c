#include<stdio.h>
int perfect(int);

int main()
{
int num,s;
printf("enter the number: ");
scanf("%d",&num);
s = perfect(num);
if(s == num)
printf("\nThe given number %d is a perfect",num);
else
printf("\nThe given number %d is not a perfect",num);
return 0;
}

int perfect(int numbr){
int a=1, sum=0;
while(a< numbr){
if(numbr % a == 0)
sum=sum+a;
a++;
}
return(sum);
}
