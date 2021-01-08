#include<stdio.h>
#include<conio.h>
int main()
{
    int phy,chem,bio,math,comp; 
    float per; 
    printf("Enter five subjects marks: ");
    scanf("%d%d%d%d%d",&phy,&chem,&bio,&math,&comp);
    per=(phy+chem+bio+math+comp)/5.0;
    printf("Percentage=%f",per);
    if(per>=50)
    {
        printf("Grade A");
    }
    else if(per>=80)
    {
        printf("Grade B");
    }
    else if(per>=70)
    {
        printf("Grade C");
    }
    else if(per>=60)
    {
        printf("Grade D");
    }
    else if(per>=40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
    if(per<40)
    {
         printf("PASS");
    }
    else
    {
         printf("FAIL");
    }
    return 0;
}