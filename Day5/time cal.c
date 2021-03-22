/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
1.Program to pass Time structure as argument and display the new Time.
Structure Time has three members hours, minutes, seconds. If

Time T1 – > 3hrs 40min 35sec

Time T2 -> 2hrs 35min 30sec

Time T3-> 6hrs 16min 5sec

*******************************************************************************/
#include<stdio.h>
struct Time
{
    int hr;
    int min;
    int sec;
};
void display(struct Time t[3]);
void addtime(struct Time t[3]);
int main()
{
  struct Time t[3];
  int i;
  for(i=0;i<3;i++)
  {
      printf("input hours ,minutes and seconds: \n");
      scanf("%d\t %d\t %d\t ",&t[i].hr,&t[i].min,&t[i].sec);
  }
display(t);
addtime(t);
}
void display(struct Time t[3])
{
    int i;
    for(i=0;i<3;i++)
    {
    printf("hours:%d \n minutes:%d \n seconds:%d \n",t[i].hr,t[i].min,t[i].sec);
    }
}
void addtime(struct Time t[3])
{
  int i,t1,t2,t3,tot_sec=0,tot_min=0,tot_hr=0;
  for(i=0;i<3;i++)
  {
      tot_sec=tot_sec+t[i].sec;
      tot_min=tot_min+t[i].min;
      tot_hr=tot_hr+t[i].hr;
  }
      t1=tot_sec/3600;
      t2=tot_min/60;
      t3=tot_hr+t2+t1;
  printf("hours:%d \t minutes:%d\t seconds:%d\t",tot_hr,tot_min,tot_sec);
  printf("total hours: %d \t",t3);
}
