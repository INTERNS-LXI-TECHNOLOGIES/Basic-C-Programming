#include <stdio.h>
struct student 
{
    char name[10];
    int  reg_no, mark1, mark2, mark3;    
};
void add ( int, struct student []);
void failed ( int, struct student []);
int main()
{
    int n;
    struct student data [n];
    printf("\n Enter the number of students : ");
    scanf("%d",&n);
    printf("\n     Maximum Marks : 100");
    printf("\n      Enter the details \n");
    add ( n, data );
    printf("\nFailed students\n");
    failed ( n, data);
}
void add ( int n, struct student data[n] )
{
    int i;
    for ( i = 1; i <= n; i++ )
    {
        printf("\n Name     :   ");
        scanf("%s", &data[i].name);
        printf(" Reg.No.  :   ");
        scanf("%d", &data[i].reg_no);
        printf("\n Mark of Subject 1 :   ");
        scanf("%d", &data[i].mark1);
        printf(" Mark of Subject 2 :   ");
        scanf("%d", &data[i].mark2);
        printf(" Mark of Subject 3 :   ");
        scanf("%d", &data[i].mark3);    
    } 
}
void failed ( int n, struct student data[n])
{
    int i;
    int x = 40;
    
    for ( i = 1; i <= n; i++ )
    {
if((data[i].mark1<x&&data[i].mark2<x)||(data[i].mark2<x&&data[i].mark3<x)||(data[i].mark1<x&&data[i].mark3<x))
 {
printf("\n Name     :   %s", data[i].name); 
printf("\n Reg.No.  :   %d", data[i].reg_no);
printf("\n Mark 1   :   %d", data[i].mark1);
printf("\n Mark 2   :   %d", data[i].mark2);
printf("\n Mark 3   :   %d", data[i].mark3);
printf("\n\n");
            }   
    }   
}