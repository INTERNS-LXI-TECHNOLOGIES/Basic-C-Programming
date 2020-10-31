/*4.  Program to pass Time structure as argument and display the new Time.
         Structure Time has three members hours, minutes, seconds.*/

#include<stdio.h>

union Times
{
    struct Time1 { int hr1, min1, sec1 ;};
    struct Time2 { int hr2, min2, sec2 ;};
    struct Time3 { int hr3, min3, sec3 ;};
};

struct Time0{
    int hr0;
    int min0;
    int sec0;
    int day0;
    struct Time1 t1;
    struct Time2 t2;
    struct Time3 t3;
};


void t_time ( struct Time0 );
void main()
{
    struct Time0 time00;

    printf("\n\nEnter 3 times");

    printf("\n\n   Time 1\n\n");
    printf("Hours   : ");
    scanf("%d",&time00.t1.hr1);
    printf("Mins    : ");
    scanf("%d",&time00.t1.min1);
    printf("Secs    : ");
    scanf("%d",&time00.t1.sec1);
    
    printf("\n   Time 2\n\n");
    printf("Hours   : ");
    scanf("%d",&time00.t2.hr2);
    printf("Mins    : ");
    scanf("%d",&time00.t2.min2);
    printf("Secs    : ");
    scanf("%d",&time00.t2.sec2);
    
    printf("\n   Time 3\n\n");
    printf("Hours   : ");
    scanf("%d",&time00.t3.hr3);
    printf("Mins    : ");
    scanf("%d",&time00.t3.min3);
    printf("Secs    : ");
    scanf("%d",&time00.t3.sec3);
    
    printf("\nTotal time ");
    t_time ( time00 );

}
void t_time ( struct Time0 time00 )
{
    time00.sec0 = time00.t1.sec1 + time00.t2.sec2 + time00.t3.sec3;

    time00.min0 = time00.t1.min1 + time00.t2.min2 + time00.t3.min3;

    time00.hr0 = time00.t1.hr1 + time00.t2.hr2 + time00.t3.hr3;

    while ( time00.sec0 >= 60 )
    {
        time00.min0 += 1;
        time00.sec0 -= 60; 
    }
    while ( time00.min0 >= 60 )
    {
        time00.hr0 += 1;
        time00.min0 -= 60;
    }
    while ( time00.hr0 >= 24 )
    {
        time00.day0 += 1;
        time00.hr0 -= 24;
    }
    
    
   
    printf(" = %d Days + %d Hours : %d Mins : %d Seconds \n\n", time00.day0, time00.hr0, time00.min0, time00.sec0);
}
    