#include<stdio.h>
int main() {
int y, mi, h, d, mo,s;
printf("enter the year");
scanf("%d",&y);
 mi = y*525949;
 h = y*525600;
 s = y*31536000;
 d = y*365;
 mo = y*12;
 printf("\nyears is =%d",y);
 printf("\nmonths is =%d",mo);
 printf("\ndays is =%d",d);
 printf("\nhours is =%d",h);
 printf("\nminutes is =%d",mi);
 printf("\nseconds is =%d",s);
 return(0);
 }
