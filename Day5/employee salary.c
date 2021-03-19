/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
Assume an Employee structure ( Empno, name, salary, experience) .
Write a program using function to read and display details of employees and 
while displaying increment salary of employees whose experience is above 8years.
*******************************************************************************/
#include<stdio.h>
struct employee
{
  char name[20];
  int empno;
  float sal;
  int expe;
};
void read(struct employee e[5]);
void display(struct employee e[5]);
int main()
{
struct employee e[5];
read(e);
display(e);
return 0;
}
void read(struct employee e[5])
{
    int n,i;
    printf("number of employee: \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("enter the name: \n");
    scanf("%s",e[i].name);
    printf("enter employee id: \n");
    scanf("%d",&e[i].empno);
    printf("enter salary: \n");
    scanf("%f",&e[i].sal);
    printf("enter experience: \n");
    scanf("%d",&e[i].expe);
    }
}
void display(struct employee e[5])
{
    int i,n;
    printf("details of employee\n");
    for(i=0;i<n;i++)
    {
        if(e[i].expe>8)
        {
          e[i].sal=e[i].sal+1000;  
        printf("name:%s \n employee id:%d \n incremented salary:%f \n experience: %d \n",e[i].name,e[i].empno,e[i].sal,e[i].expe);
        }
    }
}