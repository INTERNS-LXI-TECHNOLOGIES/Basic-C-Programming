/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
Program to find length of a given string ?(Argument & Return type)
*******************************************************************************/
#include<stdio.h>
int len(char x[20]);
int main()
{
    int l,i;
    char str[20];
    printf("enter the string: \n");
    scanf("%s",str);
    l=len(str);
    printf("the length of string  is : %d",l);
    return 0;

}
int len(char x[20])
{   
    int i,k=0;
    for(i=0;x[i]!='\0';++i)
    {
        k++;
       
    }return k;
    
}