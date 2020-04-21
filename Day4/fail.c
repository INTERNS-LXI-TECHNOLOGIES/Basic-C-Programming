#include<stdio.h>
struct Student
{
    int rollno,mark[3] ;
    char name[30];
};
void Fail(struct Student a[15]) ;
int main()
{
    struct Student s[15] ;

   for(int i=0 ;i<15;i++)
   {
       printf("\n Input Details of Student %d : \n \n Name : ",i+1) ;
       scanf("%s",&s[i].name) ;
       printf("\n Roll Number : ") ;
       scanf("%d",&s[i].rollno) ;
       for(int j=0;j<3;j++)
       {
           printf("\n Input Mark in Subject %d (Out of 100) : ",j+1) ;
           scanf("%d",&s[i].mark[j]) ;
       }
   }
}
 
}
void Fail(struct Student a[15])
{
    int c=0 ;
    printf("\n Students that Failed in More than one Subject : \n") ;

    for(int i=0;i<15;i++,c=0)
    {
        for(int j=0;j<3;j++)
        {
            if(a[i].mark[j]<40)
                c++ ;
        }
        if(c>1)
            printf("\n Roll Number : %d \n Name : %s \n ---------",a[i].rollno,a[i].name);

    }
}
