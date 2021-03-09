/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
Program to convert given string in to toggle case ?
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
       if(a[i]>='A' && a[i]<='Z')
       {
           a[i]=a[i]+32;
       }
       else if(a[i]>='a' && a[i]<='z')
       {
           a[i]=a[i]-32;
       }
   }
       printf("toggled string is: ");
       printf("%s",a);

    return 0;
}