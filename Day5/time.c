#include <stdio.h>

struct  Time0 { int hr0, min0, sec0, day0 ;
    struct Time1 { int hr1, min1, sec1 ;}t1;
    struct Time2 { int hr2, min2, sec2 ;}t2;
    struct Time3 { int hr3, min3, sec3 ;}t3; 
}t0;

void t_time ( struct Time1, struct  Time2, struct  Time3, struct  Time0 );
void display ( struct  Time1, struct  Time2, struct  Time3, struct  Time0 );
void main()
{
    struct Time1 t1;
    struct Time2 t2;
    struct Time3 t3;

    printf("\n\nEnter 3 times");

    
    printf("\n\n---Time 1---\n\n");
    printf("Hours   : ");
    scanf("%d",&t1.hr1);
    printf("Mins    : ");
    scanf("%d",&t1.min1);
    printf("Secs    : ");
    scanf("%d",&t1.sec1);
    
    printf("\n---Time 2---\n\n");
    printf("Hours   : ");
    scanf("%d",&t2.hr2);
    printf("Mins    : ");
    scanf("%d",&t2.min2);
    printf("Secs    : ");
    scanf("%d",&t2.sec2);
    
    printf("\n---Time 3---\n\n");
    printf("Hours   : ");
    scanf("%d",&t3.hr3);
    printf("Mins    : ");
    scanf("%d",&t3.min3);
    printf("Secs    : ");
    scanf("%d",&t3.sec3);

    display( t1, t2, t3, t0 );
    
    // printf("\nTotal time ");
    // t_time ( t0 );

}
void t_time ( struct  Time1 t1, struct  Time2 t2, struct  Time3 t3, struct  Time0 t0 )
{
    t0.sec0 = t1.sec1 + t2.sec2 + t3.sec3;

    t0.min0 = t1.min1 + t2.min2 + t3.min3;

    t0.hr0 = t1.hr1 + t2.hr2 + t3.hr3;

    while ( t0.sec0 >= 60 )
    {
        t0.min0 += 1;
        t0.sec0 -= 60; 
    }
    while ( t0.min0 >= 60 )
    {
        t0.hr0 += 1;
        t0.min0 -= 60;
    }
    while ( t0.hr0 >= 24 )
    {
        t0.day0 += 1;
        t0.hr0 -= 24;
    }
    printf("\n %d Days + %d Hours : %d Mins : %d Seconds ", t0.day0, t0.hr0, t0.min0, t0.sec0);
    printf("\n-------------------------------------------\n\n");

}

void display  ( struct  Time1 t1, struct  Time2 t2, struct  Time3 t3, struct  Time0 t0 )
{
    printf("\n--------------\n");
    printf("\n Data entered \n\n");

    printf("\t  %d Hours : %d Mins : %d Seconds +\n", t1.hr1, t1.min1, t1.sec1);
    printf("\t  %d Hours : %d Mins : %d Seconds +\n", t2.hr2, t2.min2, t2.sec2);
    printf("\t  %d Hours : %d Mins : %d Seconds \n", t3.hr3, t3.min3, t3.sec3);

    printf("\nTotal time \n");


    t_time ( t1, t2, t3, t0 );
}    
