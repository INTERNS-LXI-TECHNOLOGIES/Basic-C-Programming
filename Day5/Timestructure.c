#include<stdio.h>
struct Time1{
    int hours;
    int minutes;
    int seconds;
};
struct Time2{
    int hours;
    int minutes;
    int seconds;
};
struct Time3{
    int hours;
    int minutes;
    int seconds;
};
struct totalTime{
    int hours;
    int minutes;
    int seconds;
    struct Time1 t1;
    struct Time2 t2;
    struct Time3 t3;
};
void total(struct totalTime);
void main(){
    struct totalTime tot;
    printf("Enter the first time (hrs,min,sec) \n");
    scanf("%d",&tot.t1.hours);
    scanf("%d",&tot.t1.minutes);
    scanf("%d",&tot.t1.seconds);
    
    printf("\nEnter the second time (hrs,min,sec) \n");
    scanf("%d",&tot.t2.hours);
    scanf("%d",&tot.t2.minutes);
    scanf("%d",&tot.t2.seconds);
    
    printf("\nEnter the third time (hrs,min,sec) \n");
    scanf("%d",&tot.t3.hours);
    scanf("%d",&tot.t3.minutes);
    scanf("%d",&tot.t3.seconds);
    
    printf("\nThe total time ");
    total(tot);

}
void total(struct totalTime tot){
    tot.seconds = tot.t1.seconds + tot.t2.seconds + tot.t3.seconds;
    tot.minutes = tot.t1.minutes + tot.t2.minutes + tot.t3.minutes;
    tot.hours = tot.t1.hours + tot.t2.hours + tot.t3.hours;
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