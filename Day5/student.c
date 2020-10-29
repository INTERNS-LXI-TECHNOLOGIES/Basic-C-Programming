/*2.	Program to read 5 Students details and perform following functions 
	using Structure Array & Functions
		1.Search
		2.Total Mark
		3.Percentage
		4.Display All.  */

#include <stdio.h>

struct student 
{
    char name[10];
    int roll_no;
    int marks[10];    
};

void search( int, struct student []);
void total_mark( int, struct student []);
void percentage( int, struct student []);

int main()
{
    int i,j;
    struct student s[5];
    printf("\n\n Enter the details of 5 Students ");

    for ( i = 0; i < 5; i++ )
    {
        printf("\n\n Name of the student %d : ",i+1);
        scanf("%s",&s[i].name);

        printf("\n Roll number : ");
        scanf("%d",&s[i].roll_no);

        printf("\nEnter the marks of 5 subjects\n");
        for( j = 1; j <= 5; j++ )
            {
            printf("\n Marks of subject  %d: ", j);
            scanf("%d",&s[i].marks[j]);
        }
    }

    int choice, n;
    printf("\n Choose an Option.\n");
    printf("\n\t 1. Search for a student.");
    printf("\n\t 2. Total Marks of a student.");
    printf("\n\t 3. Total Percentage of a student.");
    printf("\n\t 4. Display all details.");
    printf("\n Enter the choice : ");

    scanf("%d", & choice);

    if ( choice == 1 )
    {
        printf("\n Roll No. : ");
        scanf("%d", &n);
        search ( n, s );
    }

    else if ( choice == 2 )
    {
        printf("\n Roll No. : ");
        scanf("%d", &n);
        total_mark ( n, s );
    }

    else if ( choice == 3 )
    {
        printf("\n Roll No. : ");
        scanf("%d", &n);
        percentage ( n, s );
    }

    else if ( choice == 4 )
    {
        for ( i = 1; i <= 5; i++ )
        {
            printf("\n\n Name of Student : %s", s[i].name);
            printf("\n Roll No. : %d",s[i].roll_no);
            for ( j = 1; j <= 5; j++ )
            {
                printf("\n Mark of subject %d : %d ", j, s[i].marks[j]);
            }
        }    
    }
}

void search ( int n, struct student z[5] )
{
    int x = 0, y = 0, i, j;

    for ( i = 1; i <= 5; i++ )
    {
        if ( z[i].roll_no == n )
        {
            x = i;
            y = i;
        }
    }
    if ( y != 0 )
    {
        printf("\n Name     : %s", z[y].name);
        printf("\n Roll No. : %d", z[y].roll_no);

        for ( j = 1; j <= 5; j++)
        {
            printf("\n Marks of subject %d : %d \n\n", j, z[y].marks[j]);
        }    
    }
    if ( x == 0 )
    {
        printf("\n Not Found...! \n\n");
    }
}

void total_mark ( int n, struct student z[5] )
{
   int total = 0, x = 0, i, j;
   
   for ( i = 1; i <= 5; i++ )
   {
       if ( n == z[i].roll_no )
       {
           for ( j = 1; j <= 5; j++ )
           {
               total = total + z[i].marks[j];
           }
           x = 1;
       }
   }
   if ( x == 1 )
   {
       printf("\n Total marks : %d \n\n", total);
   }
   else
   {
       printf("\n Not found...!\n\n");
   }
}

void percentage ( int n, struct student z[5] )
{
    float percent, total = 0;
    int x = 0, i, j;

    for ( i = 1; i <= 5; i++ )
    {
        if ( n == z[i].roll_no )
        {
            for ( j = 1; j <= 5; j++ )
            {
                total = total + z[i].marks[j];
            }   
            percent =  total / 5;
            x = 1;
        }
    }
    if ( x == 1 )
    {
        printf("\n Total Percentage : %f \n\n", percent);
    }
    else
    {
        printf("\n Not Found...! \n\n");
    }     
}