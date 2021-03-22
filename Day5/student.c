/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
struct student 
{
    char name[20];
    int regno;
    int m1;
    int m2;
    int m3;
    float tot;
    float avg;
    float percen;
};

void totalmark(struct student s[5]);
void percentage(struct student s[5]);
void displayAll(struct student[5]);
void search(struct student s[5]);
int main()
{ 
    struct student s[5];
    int i;
    for(i=0;i<5;i++)
    {
    printf("input name,register no,mark1,mark2,mark3 of students\n");
    scanf("%s %d  %d %d %d",s[i].name,&s[i].regno,&s[i].m1,&s[i].m2,&s[i].m3);
    }
    
    totalmark(s);
    percentage(s);
    displayAll(s);
    search(s);
    return 0;
}

void totalmark(struct student s[5])
{
    int i;
    for(i=0;i<5;i++)
    {
    s[i].tot=s[i].m1+s[i].m2+s[i].m3;
    printf("total mark of %s is %.2f\n",s[i].name,s[i].tot);
    }
}
void percentage(struct student s[5])
{
    int i;
    for(i=0;i<5;i++)
    {
    s[i].percen=(s[i].tot/300.0)*100;
    printf("percentage of %s is %.2f \n \n",s[i].name,s[i].percen);
    }
}
void displayAll(struct student s[5])
{
    int i;
        printf("student details..\n");
        for(i=0;i<5;i++)
    {
        printf("name:%s\n",s[i].name);
        printf("regno:%d\n",s[i].regno);
        printf("m1:%d\t m2:%d\t m3:%d\t\n",s[i].m1,s[i].m2,s[i].m3);
        printf("total:%.2f\n",s[i].tot);
        printf("percentage:%.2f\n",s[i].percen);
    }
}
void search(struct student s[5])
{
    int i,k=0,number;
    printf("enter regno:");
    scanf("%d",&s[i].regno);
    for (i =0;i<5;i++)
    {
        if (s[i].regno == number)
        {
           k=1;
           break;
        } 
    }
        if (k==0)
        {
            printf("Record not found : ");
        }
        else
        {
             printf("Name: %s",s[i].name);
        }
      
}
