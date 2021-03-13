/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
*******************************************************************************/
#include<stdio.h>
struct student
{
    char name[20];
    int roll_no;
    float mark;
}s;
int main()
{
    printf("enter name: \n");
    scanf("%s",s.name);
    printf("enter roll no: \n");
    scanf("%d", &s.roll_no);
    printf("enter marks: \n");
    scanf("%f" ,&s.mark);
    printf("displaying information: \n ");
    printf("name:%s\n",s.name);
    printf("roll no:%d \n",s.roll_no);
    printf("mark:%f \n",s.mark);
    return 0;
}