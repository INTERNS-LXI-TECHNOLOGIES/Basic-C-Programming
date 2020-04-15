#include<stdio.h>  
  
int main()  
{  
	char name[10],temp[10];
	int i,n,d,m,y,temp1=0,temp2=0,temp3=0;  
  
    printf("Enter the number of people: \n");  
    scanf("%d", &n);  
  
    for(int i=0;i<n;i++)  
    {  
        printf(" enter DOB\n");
	scanf("%d%d%d", &&d &&m &&y);
	if(temp1<d && temp2<m && temp3<y)
	{
	 temp1=d;
	temp2=m;
	temp3=y;
    }  
  }
     printf("youngest peson DOB is %d-%d-%d\n",temp1,temp2,temp3);  
    }  
