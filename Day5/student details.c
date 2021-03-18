/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
struct student 
{
    
    char name[20];
    int regno;
    int m1;
    int m2;
    int m3;
    int fail;
    
};
struct student s[4];
int main()
{ 
    int i;
    for(i=0;i<4;i++)
    {
    printf("input name,regno,mark1,mark2,mark3 of students\n");
    scanf("%s %d %d %d %d",&s[i].name,&s[i].regno,&s[i].m1,&s[i].m2,&s[i].m3);
    }
    for(i=0;i<4;i++)
    {
        s[i].fail=0;
        if(  (((s[i].m1)/80)*100)<=40  )
        {
            s[i].fail++;
        }
        if(  (((s[i].m2)/80)*100)<=40  )
        {
            s[i].fail++;
        }
        if(  (((s[i].m3)/80)*100)<=40  )
        {
            s[i].fail++;
        }
        
    }
    printf("the failed students are: \n");
    for(i=0;i<4;i++)
    {
        if(s[i].fail>=2)
        {
             printf("%s \n",s[i].name); 
        }
        
    }
    return 0;
}
