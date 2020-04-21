#include<stdio.h>

struct Time
{

	int hh,mm,ss;

}t1,t2;


struct Time Sum(struct Time s1,struct Time s2) ;



int main()
{
    struct Time s ;

	printf("\n Enter Time T1 (hh mm ss) : ");
	scanf("%d %d %d",&t1.hh,&t1.mm,&t1.ss);

	printf("\n Enter Time T2 (hh mm ss) : ");
	scanf("%d %d %d",&t2.hh,&t2.mm,&t2.ss);


	s = Sum(t1,t2);

	printf("\n %dHH %dMM %dSS + %dHH %dMM %dSS = %dHH %dMM %dSS ",t1.hh,t1.mm,t1.ss,t2.hh,t2.mm,t2.ss,s.hh,s.mm,s.ss) ;
	return;
}

struct Time Sum(struct Time s1,struct Time s2)
{
    struct Time tSum ;

    tSum.ss = s1.ss + s2.ss ;
    tSum.mm = s1.mm + s2.mm ;
    tSum.hh = s1.hh + s2.hh ;

    if(tSum.ss>=60)
    {
        tSum.ss -= 60 ;
        tSum.mm++ ;
    }

    if(tSum.mm>=60)
    {
        tSum.mm -= 60 ;
        tSum.hh++ ;
    }
    return tSum ;

}

