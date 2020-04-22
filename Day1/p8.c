# include <stdio.h>

void main()
{
    int n,sq ;
    printf(" \n Input the Number :  ") ;
    scanf("%d",&n) ;

     if(n<180)
      {
        sq = n*n ;
        printf(" \n %d^2 = %d",n,sq);
      }
      else
        printf(" \n Number Greater than 180. \n ");

}