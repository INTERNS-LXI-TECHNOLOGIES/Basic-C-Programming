//Program to calculate sales commission

# include <stdio.h>

int main()
{
   int com,s; // s: sales of 15 individual members

        printf(" \n Input Total Sales of Employee %d : ");
       scanf("%d",&s);

        if(s>=30000)
            com = (s*0.25) + 1000 ;
        else if(s>=10000)
            com = s*0.15 ;
        else
            com = 0 ;
         printf(" \n Total Sales for Employee %d : %d \n Commission Granted : %d \n ----------- \n",s,com);
  
}
