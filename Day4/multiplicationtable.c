#include<stdio.h>
void  table(void)
 {
int count,num ;
printf("enter the number :");
scanf("%d",&num);
printf("the number is %d",num);
for(count=0;count<=10;count++)
  {
printf("\n %d*%d=%d \n",num,count,num*count);
}
}
int main()
{
table ();
}