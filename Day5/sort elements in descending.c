/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
 Program to sort the element in descending in a 1D array using function
*******************************************************************************/
#include<stdio.h>
struct sort 
{
    int n;
    int arr[20];
    int i;
    int j;
    int max;
};
void func(struct sort s);
int main()
{
    struct sort s;
    printf("enter the limit: \n");
    scanf("%d",&s.n);
    printf("enter the values : \n");
    for(s.i=0;s.i<s.n;s.i++)
    {
        scanf("%d \n",&s.arr[s.i]);
    }
    func(s);
    return 0;
}
void func(struct sort s)
{
    s.i,s.j,s.max=0;
    for(s.i=0;s.i<s.n;s.i++)
    {
        for(s.j=s.i+1;s.j<s.n;s.j++)
        {
        if(s.arr[s.i]<s.arr[s.j])
        {
            s.max=s.arr[s.i];
            s.arr[s.i]=s.arr[s.j];
            s.arr[s.j]=s.max;
        
        }
        }
    }
    
   printf("sorted array is : \n");
    for (s.i=0;s.i<s.n;s.i++)
    {
        printf(" \t%d",s.arr[s.i]);
    } 
}
