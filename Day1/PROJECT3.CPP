#include<conio.h>
#include<stdio.h>
void main()
{
int maths,phy,chem,cs,total,per;
clrscr();
printf("\n enter the mark of mathematics: ");
scanf("%d",&maths);
printf("\n enter the mark of physics: ");
scanf("%d",&phy);
printf("\n enter the mark of chemistry: ");
scanf("%d",&chem);
printf("\n enter the mark of computer science: ");
scanf("%d",&cs);
total=maths+phy+chem+cs;
per=(total*100)/400;
printf("\n the total mark of the student is: %d",total);
printf("\n the percentage of the student is: %d",per);
if(per>=90)
{
printf("\n grade is: S ",per);
}
else if(per>=80)
{
printf("\n grade is: A ",per);
}
else if(per>=70)
{
printf("\n grade is: B ",per);
}
else if(per>=60)
{
printf("\n grade is: C ",per);
}
else if(per>=50)
{
printf("\n grade is: D ",per);
}
else if(per>=40)
{
printf("\n grade is: E ",per);
}
else if(per<40)
{
printf("\n grade is: F ",per);
}
getch();
}


