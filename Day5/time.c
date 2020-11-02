#include <stdio.h>

struct  Time 
{
    int hr, min, sec, day;
}t0;

struct Time t_time ( struct Time, struct  Time, struct  Time );
void display ( struct  Time );
void main()
{
    struct Time t1;
    struct Time t2;
    struct Time t3;

    printf("\n\nEnter 3 times");

    
    printf("\n\n---Time 1---\n\n");
    printf("Hours   : ");
    scanf("%d",&t1.hr);
    printf("Mins    : ");
    scanf("%d",&t1.min);
    printf("Secs    : ");
    scanf("%d",&t1.sec);
    
    printf("\n---Time 2---\n\n");
    printf("Hours   : ");
    scanf("%d",&t2.hr);
    printf("Mins    : ");
    scanf("%d",&t2.min);
    printf("Secs    : ");
    scanf("%d",&t2.sec);
    
    printf("\n---Time 3---\n\n");
    printf("Hours   : ");
    scanf("%d",&t3.hr);
    printf("Mins    : ");
    scanf("%d",&t3.min);
    printf("Secs    : ");
    scanf("%d",&t3.sec);

    display( t1, t2, t3, t0 );
    
    printf("\n %d Days + %d Hours : %d Mins : %d Seconds ", t0.day, t0.hr, t0.min, t0.sec);
    printf("\n-------------------------------------------\n\n");

}
struct Time t_time ( struct  Time t1, struct  Time t2, struct  Time t3 )
{
    t0.sec = t1.sec + t2.sec + t3.sec;

    t0.min = t1.min + t2.min + t3.min;

    t0.hr = t1.hr + t2.hr + t3.hr;

    while ( t0.sec >= 60 )
    {
        t0.min += 1;
        t0.sec -= 60; 
    }
    while ( t0.min >= 60 )
    {
        t0.hr += 1;
        t0.min -= 60;
    }
    while ( t0.hr >= 24 )
    {
        t0.day += 1;
        t0.hr -= 24;
    }
    // printf("\n %d Days + %d Hours : %d Mins : %d Seconds ", t0.day, t0.hr, t0.min, t0.sec);
    // printf("\n-------------------------------------------\n\n");
    return t0;
}

void display  ( struct  Time t )
    printf("\n--------------\n");
    printf("\n Data entered \n\n");

    printf("\t  %d Hours : %d Mins : %d Seconds +\n", t1.hr, t1.min, t1.sec);
    printf("\t  %d Hours : %d Mins : %d Seconds +\n", t2.hr, t2.min, t2.sec);
    printf("\t  %d Hours : %d Mins : %d Seconds \n", t3.hr, t3.min, t3.sec);

    printf("\nTotal time \n");

    t_time ( t1, t2, t3 );

    printf("\n %d Days + %d Hours : %d Mins : %d Seconds ", t0.day, t0.hr, t0.min, t0.sec);
    printf("\n-------------------------------------------\n\n");
}    
