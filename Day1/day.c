# include<stdio.h>
int main()
{
int n;
printf("Enter any no: from 1-7 ");
scanf("%d",&n);
if(n<=7)
{
     if (n==1)

            printf ("SUNDAY");

        else if (n==2)

            printf ("MONDAY");

        else if (n==3)

            printf ("TUESDAY");

        else if (n==4)

            printf ("WEDNESDAY");

        else if (n==5)

            printf ("THURSDAY");

        else if (n==6)

            printf ("FRIDAY");

        else

            printf ("SATURDAY");
}
else
printf("ivalid");
}
