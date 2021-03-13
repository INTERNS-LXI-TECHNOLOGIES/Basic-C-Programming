/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
To generate prime Series between 10 and 100. (Argument & not return type)
*******************************************************************************/
#include<stdio.h>
struct Emp
{
    int eno;
    char ename[20];
    float sal;
};
void main()
{
    struct Emp e={100,"bnj",2355100};
    printf("employee details\n");
    printf("eno:%d\n",e.eno);
    printf("ename:%s\n",e.ename);
    printf("sal:%f\n",e.sal);
}
