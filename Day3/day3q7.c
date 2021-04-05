#include <stdio.h>
int main(){
int limit,values[100],j,temp=0,i;
printf("Enter limit\n");
	scanf("%d\n",&limit);
	printf("Enter Values\n");
	for(i=0;i<limit;i++)
	{
		scanf("%d\n",&values[i]);
	}
	for(i=0;i<limit-1;i++){
		for(j=i+1;j<limit;j++)
		{
			if(values[i]>values[j]){
				temp=values[i];
				values[i]=values[j];
				values[j]=temp;
				}
		}
	}
	printf("The sorted values are :\n");
	for(i=0;i<limit;i++)
	{
		printf("%d\n",values[i]);
	}
	}
