/*11. To prepare a table showing the amount under simple & compound interest 
for the principal 1000000 RS. For 10 years. The rate is 12.5 % per annum
and the amount is compounded quarterly.*/

#include<stdio.h>
#include<math.h>
int main()
{
    char choice;
    // int i,n,x,y;
    // int principal,year,rate;
    
    float simple,compound,rate,s_total,c_total,principal,year,y;
    int x,i;

    printf("\n Select Choice \n\n");
    printf("\t\t 1. Simple Interest \n");
    printf("\t\t 2. Compound Interest \n");
    printf("\n Enter the choice : ");

    scanf("%c",&choice);

    if (choice >= 0x33)
    {
        printf("\n Invalid Choice...!\n\n");
    }
    else
    {    
        switch (choice)
        {
            case '1' :

                printf("\n\n Enter the following data ");
                printf("\n\n Principal amount : ");
                scanf("%f",&principal);
                printf("\n No.of years : ");
                scanf("%f",&year);
                printf("\n Interest rate : ");
                scanf("%f",&rate);

                for ( i = 1; i <= year; i++ )
                {
                
                    simple = principal * rate * year;
                    s_total = simple + principal;

                    printf("\n %d   Principal Amount : %f   Simple Interest : %f,   Balance : %f ",i,principal, simple,s_total);
                    principal = s_total;
                }
                printf("\n\n");
                break;

            case '2' :

                printf("\n\n Enter the following data ");
                printf("\n\n Principal amount : ");
                scanf("%f",&principal);
                printf("\n No.of years : ");
                scanf("%f",&year);
                printf("\n Interest rate : ");
                scanf("%f",&rate);

                rate = rate / 400;
                for(i = 1; i <= year; i++)
                {
                    y = pow( 1 + rate, year);
                    compound = principal * y;
                    c_total = compound + principal;
                
                    printf("\n %d    Principal amount : %f  Compound Interest : %f  Balance : %f  ",i,principal,compound,c_total);
                    principal = c_total;
                }
                printf("\n\n");
                break; 
        }
    }
    return 0;
    
}