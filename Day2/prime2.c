#include<stdio.h>
void main()
{
int l1,l2,i,count,j;
printf("\n Enter Start Limit");
scanf("%d",&l1);
printf("\n Enter End Limit");
scanf("%d",&l2);

printf("\n Prime Series");
for(j=l1;j<=l2;j++)
{
count=0;

for(i=1;i<=j;i++)
	{
		if(j%i==0)
		{
			count++;
		}
	}
	
	if(count==2)
        printf("\t %d",j);

}





}
