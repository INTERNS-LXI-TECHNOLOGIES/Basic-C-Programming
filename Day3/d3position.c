#include <stdio.h>
void main()
{
    int a[100], i, item;
    printf("\nEnter elements of an array:\n");
    for (i=0; i<=10; i++)
    scanf("%d", &a[i]);
    printf("\nEnter item to search: ");
    scanf("%d", &item);
    for (i=0; i<=10; i++)
        if (item == a[i])
        {
            printf("\nItem found at location %d", i+1);
            break;
        }
    if (i > 10)
        printf("\nItem does not exist.");
 }