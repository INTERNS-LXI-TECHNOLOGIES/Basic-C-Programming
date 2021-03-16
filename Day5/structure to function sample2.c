/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[20];
    float perc;
};
void func(struct student record1,struct student record2);
int main()
{
    struct student record1;
    struct student record2;
    record1.id=1;
    strcpy(record1.name,"anju");
    record1.perc=81.69;
    record2.id=2;
    strcpy(record2.name,"anu");
    record2.perc=89.69;
    func(record1,record2);
    return 0;
}
void func(struct student record1,struct student record2)
{
    printf("id: %d\t name: %s\t perc: %.2f \t",record1.id,record1.name,record1.perc);
    printf("id: %d\t name: %s\t perc: %.2f \t",record2.id,record2.name,record2.perc);
}
