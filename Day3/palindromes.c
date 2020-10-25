// 10.	Program to check whether the given string is Palindrome or not 

#include <stdio.h>
#include <string.h>
int main()
{
    char org[100], rev[100];

    printf("\n\n Enter the string : ");
    scanf("%s",org);

    strcpy(rev, org);
    strrev(rev);

    if (strcmp(org, rev) == 0)
    {
        printf("\n %s is a palindrome.\n\n", org);
    }
    else
    {
        printf("\n %s isn't a palindrome.\n\n", org);
    }
  return 0;
}