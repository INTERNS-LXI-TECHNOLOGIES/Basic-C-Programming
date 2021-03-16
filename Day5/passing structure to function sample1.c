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
void func(struct student record);
int main()
{
    struct student record;
    record.id=1;
    strcpy(record.name,"anju");
    record.perc=81.6;
    func(record);
    return 0;
}
void func(struct student record)
{
    printf("id: %d\t name: %s\t perc: %f \t",record.id,record.name,record.perc);
}