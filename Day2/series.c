#include <stdio.h>

int main()
{
	
	char choice;
    int i,n,x,y;
    
    printf("\n Select the choice ");
    printf("\n\n 1. To print series 1 + 1/1! +1/2! +.......+ 1/n! ");
    printf("\n\n 2. To print series 1 + x/1! + x^3/2! + x^5/3! +.......+ X^2n-1/n!");
    printf("\n\n 3. To print series x - x2/2! - x3/3! - x4/4! - ....... - xn/n! \n\n" );
    printf(" Enter the choice : ");

    scanf("%c",&choice);
    if (choice >= 0x34)
    {
        printf("\n Invalid Choice...!\n\n");
    }
    else
    {
        switch (choice)
        {
            case '1' :
    
	            printf("\nInput number of terms (n): ");
	            scanf("%d",&n);
                printf("\n1");

	            for ( i = 1; i <= n; i++ )
	            {
                    x=i;
                    printf(" + 1/%d!" , x);
                    x++;    
	            }
	            printf("\n\n" );
                break;

            case '2' :

                printf("\nInput number of terms (n): ");
	            scanf("%d",&n);
                printf("\n1");

	            for ( i = 1; i <= n; i++ )
	            {
                    x = i;
                    y = (2*i)-1;
                    printf(" + x^%d/%d!" ,y,x);
                    x++;
                    y++;
	            }
	            printf("\n\n" );
                break;

            case '3' :

                printf("\nInput number of terms (n): ");
	            scanf("%d",&n);
                printf("\nx");

                for ( i = 1; i <= n; i++ )
	            {
                x = i;
                printf(" - x%d/%d!" ,x,x);
                x++;
	            }
	            printf("\n\n" );
                break;
        }
    }
    return 0;
} 