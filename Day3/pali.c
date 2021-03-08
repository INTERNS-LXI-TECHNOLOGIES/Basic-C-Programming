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

