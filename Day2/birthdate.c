

#include <stdio.h>
int main() 
{
    char ch;
    int ly =0, lm = 0, ld = 0;
    do
    {   
        char name;
        int i,tempy, tempm, tempd, count = 0, x=100,d,m,y;
        printf("\n Enter The name : ");
        scanf("%c",&name);

        printf("\nEnter date (dd/mm/yy) : ");
        scanf("%d %d %d", &tempd,&tempm,&tempy);

        ch=getchar();
        if(ch=='~')
        {
            printf("\n\nYoungest Birthdate is %d / %d / %d\n\n",d,m,y);
            break;
        }

        if (tempd > 0 && tempm > 0 && tempy > 0 ) 
        {
            for (i = 1; i < x ; i++) 
            {
                if ( tempy > ly )
                {
                    ly = tempy;
                    y = ly;
                    m = tempm;
                    d = tempd;

                    if ( tempy = ly )
                    {   
                        if ( tempm > lm )
                        {
                            lm = tempm;
                            m = lm;
                            d = tempd;
                        }
                                 
                        if ( tempm = lm )
                        {
                            if ( tempd >= ld )
                            {
                                ld = tempd;
                                d = ld;
                            }  
                        }
                    }
                }
            }
        }
        else
        {
            printf("Invalid Input...!");
        }
    } 
    while(1);        
}