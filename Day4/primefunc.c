#include<stdio.h>
int prime(int j);

int main()
{
int p;
printf("Enter the number \n");
scanf("%d",&p);
prime(p);
return 0;
}
int prime(int j)
{
if(j%2!=0)
{
printf("%d is prime",j);
}
else{
printf("%d is not prime",j);
}
}

