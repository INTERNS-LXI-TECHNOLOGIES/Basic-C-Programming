#include<stdio.h>
#include<stdlib.h>

struct employee()
{
	int empNo;
	char name[20];
	int salary;
	int experiance;
	
};

struct company
{
	char name[10];
	char dept[10];
	struct employee e[10];
	
};



void input(struct company);
{
	printf("\n \n Input Details of Employee %d : \n \n Employee Number : ",i+1) ;
    scanf("%d",&e[i].empNo) ;
    printf("\n Name : ") ;
    scanf("%s",&e[i].name) ;
    printf("\n Experience : ") ;
    scanf("%d",&e[i].experiance) ;
    printf("\n Salary : ") ;
    scanf("%d",&e[i].salary) ;	
	
}
void Display()
{	
	int i;
    for(i=0 ;i<10;i++)
    {
        printf("\n \n Details of Employee : %d \n \n Employee Number : %d ",i+1,e[i].empNo) ;
        printf("\n Name : %s\n Experience : %d",e[i].name,e[i].experiance) ;

        if(e[i].experiance>8)
            {
                e[i].salary += (e[i].salary*0.15) ;
                printf("\n \n Salary Increment of 15 Percent Awarded") ;
            }
        printf("\n \n Salary : %d \n --------------",e[i].salary) ;

    }

}



