#include<stdio.h>
int length (char s [10])
{
int l=0,i;
for (i=0;s [i]!='\0';i++)
{
l++;
}

return l;

}
void main ()
{
int le;
char s [10];
printf ("Enter String:");
scanf ("%s",s);
le=length (s);
printf ("Length is %d",le);
}