
#include <stdio.h>

int Gcd(int a,int b) ;

int main()
{

    int n1,n2,gcd ;

    printf("\n Input Number 1 : ") ;
    scanf("%d",&n1) ;
    printf("\n Input Number 2 : ") ;
    scanf("%d",&n2) ;

    gcd = Gcd(n1,n2) ;

    printf("\n \n The G.C.D of %d & %d is %d. \n \n ",n1,n2,gcd) ;

}

int Gcd(int a,int b)
{
    int l,gcd = 1 ;

    l = (a<b)? a : b ;

    for(int i=1 ; i<=l ; i++)
    {
        if(a%i==0 && b%i==0)
            gcd = i ;
    }
    return gcd ;
}
