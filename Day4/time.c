#include<stdio.h>


struct time 
   {
    int hours;
    int minutes;
    int seconds;
    };
    

void add (int,int,int,int,int,int);

int main()
{
    struct time t1,t2;
   
   
    printf ("Enter 1st time.");
   
 printf ("\n\nEnter Hours:  Minutes:  Seconds:");
 scanf ("%d%d%d",&t1.hours,&t1.minutes,&t1.seconds);
 
 printf ("\n\nThe Time is %d:%d:%d",t1.hours,t1.minutes,t1.seconds);
   
   
    printf ("\n\n\n type the 2nd time.");
   
      
 printf ("\n\nEnter Hours:  Minutes:  Seconds:");
 scanf ("%d%d%d",&t2.hours,&t2.minutes,&t2.seconds);
 
 

    printf ("\n\nThe Time is %d:%d:%d",t2.hours,t2.minutes,t2.seconds);
   
  
    add (t1.hours,t1.minutes,t1.seconds,t2.hours,t2.minutes,t2.seconds);
   
 printf ("\n\nPress any key to exit.");
 
 
}


void add (int x,int y,int z,int a,int b,int c)
{
     int h,m,s;
   
     h = x + a;
     m = y + b;
     s = z + c;
   
     printf ("\n\n\nSum of the two time's is %d:%d:%d",h,m,s);
}
