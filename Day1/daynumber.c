#include<stdio.h>
int main()
{
    int i;
    char *(a[7])={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};

    printf("\n Enter the Day No. : ");
    scanf("%d",&i);

    if (i>6||i<0)
    {
        printf("\n Invalid Input...! \n");
    }
    else
    {
        printf("\n The Day is : %s",a[i]);
    }
    return 0;
}