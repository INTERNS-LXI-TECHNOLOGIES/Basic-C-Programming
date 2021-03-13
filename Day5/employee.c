/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
*******************************************************************************/
#include<stdio.h>
struct employee
{
    char name[20];
    int code;
    float sal;
};
int main()
{
    struct employee e={"anju",101,2000};
    printf("displaying information: \n ");
    printf("\n");
    printf("name:%s\n",e.name);
    printf("code:%d \n",e.code);
    printf("salary:%f \n",e.sal);
    return 0;
}