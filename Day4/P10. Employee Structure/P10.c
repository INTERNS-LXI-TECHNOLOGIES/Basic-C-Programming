/*
10.	Assume an Employee structure ( Empno, name, salary, experience) .
Write a program using function to read and display details of employees
while displaying increment salary of employees whose experience is above 8years.
*/

#include<stdio.h>

void Input() ;
void Display() ;

struct Employee
{
    int empNo,exp,sal ;
    char name[25] ;
} e[10];

void main()
{
    Input() ;
    Display() ;
}

void Input()
{
    for(int i=0 ; i<10;i++)
    {
        printf("\n \n Input Details of Employee %d : \n \n Employee Number : ",i+1) ;
        scanf("%d",&e[i].empNo) ;
        printf("\n Name : ") ;
        scanf("%s",&e[i].name) ;
        printf("\n Experience : ") ;
        scanf("%d",&e[i].exp) ;
        printf("\n Salary : ") ;
        scanf("%d",&e[i].sal) ;

    }

}

void Display()
{
    for(int i=0 ;i<10;i++)
    {
        printf("\n \n Details of Employee : %d \n \n Employee Number : %d ",i+1,e[i].empNo) ;
        printf("\n Name : %s\n Experience : %d",e[i].name,e[i].exp) ;

        if(e[i].exp>8)
            {
                e[i].sal += (e[i].sal*0.15) ;
                printf("\n \n Salary Increment of 15 Percent Awarded") ;
            }
        printf("\n \n Salary : %d \n --------------",e[i].sal) ;

    }

}
