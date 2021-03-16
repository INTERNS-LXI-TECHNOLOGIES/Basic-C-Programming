/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
 
*******************************************************************************/
#include<stdio.h>
struct position 
{
    int i;
    int a[20];
    int num;
    int c;
};
void ele(struct position p);
int main()
{
    struct position p;
    printf("enter the elements: \n");
    for(p.i=0;p.i<5;p.i++)
    {
        scanf("%d",&p.a[p.i]);
    }
    printf("the elements are:");
    for(p.i=0;p.i<5;p.i++)
    {
        printf("%d\t",p.a[p.i]);
    }
    printf("\nenter a number to be searched:");
    scanf("%d",&p.num);
    ele(p);
    
    return 0;
}
void ele(struct position p)
{
    p.c=0,p.i=0;
    for(p.i=0;p.i<5;p.i++)
    {
        if(p.a[p.i]==p.num)
        {
           p.c=1;
           break;
        }
          
    }  
    if(p.c==1)
    {
    printf("the searched item %d  is found at the position %d",p.num,p.i+1);
    }
    else
    {
    printf("item not found");
    }
       
}