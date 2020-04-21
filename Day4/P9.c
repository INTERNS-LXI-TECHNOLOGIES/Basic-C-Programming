#include<stdio.h>

struct student
{
	char name [20]; 
	int rollno, m[3];
};

void PrintFail(struct Student s[15]) ;

int main()
{
    struct Student s[15] ;
	int i,j;
   for(i=0 ;i<15;i++)
   {
       printf("\n Input Details of Student %d : \n \n Name : ",i+1) ;
       scanf("%s",&s[i].name) ;
       printf("\n Roll Number : ") ;
       scanf("%d",&s[i].rollno) ;
       for(j=0;j<3;j++)
       {
           printf("\n Input Mark in Subject %d (Out of 100) : ",j+1) ;
           scanf("%d",&s[i].m[j]) ;
       }
   }
   PrintFail(s) ;
   return;
}
oid PrintFail(struct Student s[15])
{
    int i,j,c=0 ;
    printf("\n Students that Failed in More than one Subject : \n") ;

    for(i=0;i<15;i++,c=0)
    {
        for(j=0;j<3;j++)
        {
            if(a[i].m[j]<40)
                c++ ;
        }
        if(c>1)
            printf("\n Roll Number : %d \n Name : %s \n ---------",a[i].rNo,a[i].name);
return ;
    }
}