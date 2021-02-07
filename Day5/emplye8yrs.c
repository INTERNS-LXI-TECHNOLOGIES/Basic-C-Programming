#include <stdio.h>
struct employee
{
    int empno;
    char name[10];
    int salary;
    int experience;
};
void add ( struct employee[] );
void display ( struct employee[] );
int increment ( int, struct employee[] );
int main()
{
    int n, q, inc;
    struct employee details [10];
    printf("\n\n Enter 3 Employee details\n");
    add(details);
    printf("\n Choose an option");
    printf("\n\t 1. All Employees details");
    printf("\n\t 2. Employees with increment");
    printf("\n Enter the choice : ");
    scanf("%d", &q);
    if ( q == 1 )
    {
        printf("\n\n Employees Details\n");
        display (details );
    }
    else if ( q == 2 )
    {
            printf("\n\n Employee deails with increment\n");
            increment ( inc, details );
    }
}
void add ( struct employee details[10] )
{
    int i;
    for ( i = 1; i <= 3; i++ )
    {
        printf("\n Employee No. : ");
        scanf("%d", &details[i].empno);
        printf(" Name         : ");
        scanf("%s", &details[i].name);
        printf(" Salary       : INR ");
        scanf("%d", &details[i].salary);
        printf(" Experience   : ");
        scanf("%d", &details[i].experience);
    }
}
void display ( struct employee details[10] )
{
    int i, j, x = 0;
    for ( i = 1; i <= 5; i++ )
    {
         printf("\n\n Emp No.  : %d", details[i].empno);
         printf("\n Name     : %s", details[i].name);
         printf("\n Salary   : %d", details[i].salary);
    }
}
int increment ( int inc, struct employee details[10] )
{
    int i, j, x, a = 500;
    for( i = 1; i <= 5; i++ )
    {
            if ( details[i].experience >= 8 )
            {
                details[i].salary += a;
                x = i;
                for( j = 1; j <= 5; j++ )
                {
                    if ( j == x )
                    {
                        printf("\n\n Employee No. : %d",details[x].empno);
                        printf("\n Name         : %s",details[x].name);
                        printf("\n Salary       : %d",details[x].salary);
                    }
                }  

            }
    }
}