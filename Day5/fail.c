/*8.	An array stores details of 15 students( regno, name, marks in three subjects). 
	Write a program to create such an array and print out a list of students 
	who have failed in more than one subject.  Assume 40% as pass marks.*/

#include <stdio.h>

struct student 
{
    char name[10];
    int  reg_no, mark1, mark2, mark3;    
};

void add ( int, struct student []);
void fail ( int, struct student []);

int main()
{
    int n;
    struct student failed [n];
    printf("\n Enter the number of students : ");
    scanf("%d",&n);

    printf("\n     Maximum Marks : 100");
    
    printf("\n      Enter the details \n");
    add ( n, failed );

    printf("\nFailed students\n");
    fail ( n, failed);
}

void add ( int n, struct student failed[n] )
{
    int i;
    for ( i = 1; i <= n; i++ )
    {
        printf("\n Name     :   ");
        scanf("%s", &failed[i].name);

        printf(" Reg.No.  :   ");
        scanf("%d", &failed[i].reg_no);

        printf("\n Mark of Subject 1 :   ");
        scanf("%d", &failed[i].mark1);

        printf(" Mark of Subject 2 :   ");
        scanf("%d", &failed[i].mark2);

        printf(" Mark of Subject 3 :   ");
        scanf("%d", &failed[i].mark3);    
    } 
}

void fail ( int n, struct student failed[n])
{
    int i;
    int x = 40;
    
    for ( i = 1; i <= n; i++ )
    {
        if (( failed[i].mark1 < x && failed[i].mark2 < x) || ( failed[i].mark2 < x && failed[i].mark3 < x) || ( failed[i].mark1 < x && failed[i].mark3 < x))
            {
                printf("\n Name     :   %s", failed[i].name); 
                printf("\n Reg.No.  :   %d", failed[i].reg_no);
                
                printf("\n Mark 1   :   %d", failed[i].mark1);
                printf("\n Mark 2   :   %d", failed[i].mark2);
                printf("\n Mark 3   :   %d", failed[i].mark3);
                printf("\n\n");
            }   
    }   
}