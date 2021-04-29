#include<stdio.h>
struct Time
{
    int hr;
    int min;
    int sec;
}t[];
void data(struct Time t[]);

int main()
{
  struct Time t[3];
  int i;
 
     t[0].hr=3;
 t[0].min=40;
 t[0].sec=35;
 t[1].hr=2;
  t[1].min=35;
 t[1].sec=45;
 t[2].hr=30;
  t[2].min=16;
 t[2].sec=5;
 
  
data(t);

}
void data(struct Time t[])
{
    int i;
    for(i=0;i<3;i++)
    {
    printf("\n\n%d hours \t %d minutes \t %dseconds\n",t[i].hr,t[i].min,t[i].sec);
    }
}
