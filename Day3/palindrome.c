/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
Program to check whether the given string is Palindrome or not ?
*******************************************************************************/
#include<stdio.h>
#include<string.h>
int main()
{ 
    char name[20];
    int i,flag=0,length;
   printf("enter the string:");
   scanf("%s",&name);
   length=strlen(name);
   for(i=0;i<length;i++)
   {
       if(name[i]!=name[length-i-1])
       {
       flag=1;
       break;
       }
   }
   if(flag==0)
   {
       printf("%s is palindrome",name);
   }
   else
   {
        printf("%s is not palindrome",name);
   }
   
    
 return 0;   
}




