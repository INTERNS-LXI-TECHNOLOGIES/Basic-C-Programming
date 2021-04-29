
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
}s[];

void totalmark(struct student s[]);
void percentage(struct student s[]);
void displayAll(struct student[]);
void search(struct student s[]);
int main()
{ 
   
    int i;
    for(i=0;i<6;i++)
    {
    printf("input name\n");
      scanf("%s\n",&s[i].name);
    	printf("register number\n");	
    	 scanf("%d\n",&s[i].regno);
    		printf("mark1\n");
    	 scanf("%d\n",&s[i].m1);
    		printf("mark2\n");
    	 scanf("%d\n",&s[i].m2);
    		printf("mark3\n");
    	 scanf("%d\n",&s[i].m3);
    }
    
    totalmark(s);
    percentage(s);
    displayAll(s);
    search(s);
    return 0;
}

void totalmark(struct student s[])
{
    int i;
    for(i=0;i<6;i++)
    {
    s[i].tot=s[i].m1+s[i].m2+s[i].m3;
    printf("total mark of %s is %.2f\n",s[i].name,s[i].tot);
    }
}
void percentage(struct student s[])
{
    int i;
    for(i=0;i<6;i++)
    {
    s[i].percen=(s[i].tot/300.0)*100;
    printf("percentage of %s is %.2f \n \n",s[i].name,s[i].percen);
    }
}
void displayAll(struct student s[])
{
    int i;
        printf("student details..\n");
        for(i=0;i<6;i++)
    {
        printf("name:%s\n",s[i].name);
        printf("regno:%d\n",s[i].regno);
        printf("m1:%d\t m2:%d\t m3:%d\t\n",s[i].m1,s[i].m2,s[i].m3);
        printf("total:%.2f\n",s[i].tot);
        printf("percentage:%.2f\n",s[i].percen);
    }
}
void search(struct student s[])
{
    int i,flag=0,number;
    printf("enter regno:");
    scanf("%d",&number);
    for (i=0;i<6;i++)
    {
        if (s[i].regno == number)
        {
           flag=i;
           break;
        } 
    }
       
        if(flag==i)
       {
       
        
             printf("Name: %s\n ",s[i].name);
             printf("total of %s is %.2f\n",s[i].name,s[i].tot);
             printf("percentage of %s is %.2f\n",s[i].name,s[i].percen);
        }
      
}
