/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
Program to convert given string into title case ?
*******************************************************************************/
#include<stdio.h>
int main()
{
    char a[100];
    int i;
   printf("enter a string: \n");
   scanf("%s",&a);
   for(i=0;a[i]!='\0';i++)
   {
       if(a[0]>='97' && a[0]<='122')
           {
           a[0]=a[0]-32;
           }
   }
   for(i=1;a[i]!='\0';i++)
   {
           if(a[i]>='65' && a[i]<='90')
           {
           a[i]=a[i]+32;
           }
           
   }
       printf("title string is: ");
       printf("%s",a);

    return 0;
}