#include <stdio.h>
struct complex
{
int real,img;
};
void main()
{
int ch;
struct complex a;
//b,c;
printf("1.add\n2.multiply\n");
scanf("%d",&ch);
printf("First complex number:\n");
scanf("%d",&a.real);
scanf("%d",&a.img);
printf("second complex number:\n");
scanf("%d",&a.real);
scanf("%d",&a.img);
if(ch==1)
{
a.real = a.real+a.real;
a.img = a.img +a.img;
if(a.img>=0)
{
printf("sum=%d +i %d",a.real,a.img);
}
}
else if(ch==2)
{
a.real = a.real*a.real -a.img*a.img;
a.img = a.img * a.real + a.real*a.img;
if(a.img>=0)
{
printf("mutiply=%d +i %d",a.real,a.img);
}
}
}

