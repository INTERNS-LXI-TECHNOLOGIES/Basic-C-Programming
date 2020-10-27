// 8.	Program to convert given string in to title case

#include <ctype.h> 
#include <string.h>
#include <stdio.h> 
  
int main() 
{ 
    int i = 0; 
    char str[100]; 
    char ch; 
  
    printf("\n\n Enter the string : ");
    scanf("%s",str);
    printf("\n\t");
    printf("%c",toupper(str[0]));

    while (str[i]) 
    { 
        str[i] = str[i]-str[0];
        ch = str[i]; 
        printf("%c",tolower(ch)); 
        i++; 
    } 
    printf("\n\n");
       
    return 0;       
} 

   