//8.     Program to check whether the given number is palindrome or not ?

#include <stdio.h>
int main() {
    int n, rev = 0, r, org;
    printf("\n Enter an Integer: ");
    scanf("%d", &n);
    org = n;

   
    while (n != 0) 
    {
        r = n % 10;
        rev = rev * 10 + r;
        n /= 10;
    }

    if (org == rev)
        printf("\n %d is a Palindrome.", org);
    else
        printf("\n %d is not a Palindrome.", org);

    return 0;
}