// 8.	Program to convert given string in to toggle case ?

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main ()
{
    char ch, str[100];
    int i;

    printf("\n\n Enter the Word : ");
    scanf("%s",str);
    printf("\n\t");

    if (islower(str[i]))
    {
        while (str[i]) 
        { 
            ch = str[i]; 
            printf("%c",toupper(ch)); 
            i++; 
        } 
    }
    else
    {
        while (str[i]) 
        { 
            ch = str[i]; 
            printf("%c",tolower(ch)); 
            i++; 
        } 
    }
    return(0);
}