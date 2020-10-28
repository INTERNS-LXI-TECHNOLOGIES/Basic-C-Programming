// 4.	Program to find length of a given string ?(Argument & Return type)

#include <stdio.h>
#include <string.h>

int len( char array[] );

int main() 
{
    int i,l;
    char a[100];

    printf("\n\n Enter the Word : ");
    scanf("%s",a);

    l = len( a );

    printf("\n Length of the Word is %d", l);

    printf("\n\n");

}

int len( char array[100] )
{
   int length = strlen( array );
   return length;
}


