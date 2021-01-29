#include<stdio.h>
void  table(void)
 {
int numx,numy ;
printf("enter the number :");
scanf("%d",&numy);
printf("the number is %d",numy);
for(numx=0;numx<=10;numx++)
  {
printf("\n %d*%d=%d \n",numy,numx,numy*numx);
}
}
int main()
{
table ();
}