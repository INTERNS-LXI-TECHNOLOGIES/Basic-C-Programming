#include<stdio.h>
struct Student
{
    char name[25] ;

    int m[3],rollno;
} s[5] ;

int main()
{
    int op ;

    Input() ;

    printf("\n Choose Action : \n \n (1) Search. \n (2) Total Marks. \n (3) Percentage. \n (4) Display. \n \n : ") ;
    scanf("%d",&op);

       switch (op)
       {
       case 1 :
        Search() ;
        break ;
       case 2 :
        Total();
        break ;
       case 3 :
        Percentage() ;
        break ;
       case 4 :
        Display() ;
        break ;
       default :
        printf("\n \n Invalid option.") ;

       }

}
void Input() ;

void Search() ;

void Total() ;

void Percentage() ;

void Display() ;
void Input()
{
     for(int i=0;i<5;i++)

   {
       printf("\n Input Details of Student %d : \n Name : ",i+1) ;
       scanf("%s",&s[i].name) ;
       printf("\n Roll Number : ") ;
       scanf("%d",&s[i].rollno) ;
       printf("\n Age : ") ;
       scanf("%d",&s[i].age) ;
       for(int j=0;j<3;j++)
       {
           printf("\n Mark %d : ",j+1) ;
           scanf("%d",&s[i].m[j]) ;
       }
   }
}

void Search()
{
    int a ;

    printf("\n Input Roll Number of Student to be Searched : ") ;
    scanf("%d",&a) ;

    for(int i=0;i<5;i++)
    {
        if(a==s[i].rollno)
        {
            printf("\n \n Roll Number : %d \n Name : %s \n Age : %d \n Mark in Subject 1 : %d \n Mark in Subject 2 : %d \n Mark in Subject 3 : %d \n ",s[i].rollno,s[i].name,s[i].age,s[i].m[1],s[i].m[2],s[i].m[3]) ;
            return ;
        }
    }

        printf("\n Invalid Roll Number.") ;
}

void Total()
{
    int sum[5]={};

    for(int i=0;i<5;i++)
        sum[i]+= s[i].m[i]+s[i].m[i+1]+s[i].m[i+2] ;
    for(int i=0;i<5;i++)
        printf("\n \n Total Mark of Student %d : %d",i+1,sum[i]) ;

}

void Percentage()
{
    int sum[5]={};

    for(int i=0;i<5;i++)
        sum[i]+= s[i].m[0]+s[i].m[1]+s[i].m[2] ;
    for(int i=0;i<5;i++)
        printf("\n \n Total Percentage of Student %d : %d %%",i+1,sum[i]/3) ;

}
void Display()
{

    for(int i=0;i<5;i++)

   {
       printf("\n Details of Student %d : \n \n Name : %s \n Roll Number : %d \n Age : %d",i+1,s[i].name,s[i].rollno,s[i].age) ;

       for(int j=0;j<3;j++)
           printf("\n Mark %d : %d",j+1,s[i].m[j]) ;

        printf("\n --------------------- \n ") ;

   }
}
