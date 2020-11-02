#include<stdio.h>
struct Time{
    int hours;
    int minutes;
    int seconds;
};
void total(struct Time,struct Time,struct Time);
void main(){
    struct Time time1;
    struct Time time2;
    struct Time time3;
    struct Time tot;
    printf("Enter the first time (hrs,min,sec) \n");
    scanf("%d",&time1.hours);
    scanf("%d",&time1.minutes);
    scanf("%d",&time1.seconds);
    
    printf("\nEnter the second time (hrs,min,sec) \n");
    scanf("%d",&time2.hours);
    scanf("%d",&time2.minutes);
    scanf("%d",&time2.seconds);
    
    printf("\nEnter the third time (hrs,min,sec) \n");
    scanf("%d",&time3.hours);
    scanf("%d",&time3.minutes);
    scanf("%d",&time3.seconds);
    
    printf("\nThe total time ");
    total(time1,time2,time3);

}
void total(struct Time time1,struct Time time2,struct Time time3){
    struct Time tot;
    tot.seconds = time1.seconds + time2.seconds + time3.seconds;
    tot.minutes = time1.minutes + time2.minutes + time3.minutes;
    tot.hours = time1.hours + time2.hours + time3.hours;
    while(tot.seconds>=60){
        tot.minutes += 1;
        tot.seconds = tot.seconds-60; 
    }
    while(tot.minutes>=60){
        tot.hours += 1;
        tot.minutes = tot.minutes-60;
    }
    printf("\n%d hrs-%d min- %d sec ",tot.hours,tot.minutes,tot.seconds);
}