#include<stdio.h>  
  
int main()  
{  
	char name,Name;
	int i,n,d,m,y,D=0,M=0,Y=0;  
	
  
    printf("Enter the number of people: \n");  
    scanf("%d", &n);  
  //To check on people
  
    for(int i=1;i<=n;i++)  
    {  
    	printf("Enter the name\n");
  scanf("%c",&name);
  
        printf("Enter DOB (dd mm yyyy)\n");
	scanf("%d %d %d",&d,&m,&y);
	if(Y<y)//if inside for
	{
	Name = name;	
	 D=d;
	M=m;
	Y=y;
		//printf("youngest peson DOB is %d %d %d\n",D,M,Y); 
    }  
  //  printf("youngest peson DOB is %d %d %d\n",D,M,Y); 
  }
     //printf("youngest peson DOB is %d %d %d\n",D,M,Y);  
     if(Y=y)//if inside for
     
     if(M<m){ 
	{
		Name=name;	
	 D=d;
	M=m;
	Y=y;
		
    }  
  }
   //  printf("youngest peson DOB is %d %d %d\n",D,M,Y);  
     if(M=m){ 
     	if(D<d){
	{
		Name=name;	
	 D=d;
	M=m;
	Y=y;
		
    }  
  }
     printf("youngest person DOB  is %d %d %d  \n",D,M,Y);  
    }  

    }  
