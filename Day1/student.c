#include<stdio.h>
#include<math.h>
void main()
{
int chem,math,phys,comp,lang,total_marks;
float percentage;
printf("enter marks of chemistry \t");
scanf("%d",&chem);
printf("enter marks of math \t");
scanf("%d",&math);
printf("enter marks of phys \t");
scanf("%d",&phys);
printf("enter marks of comp \t");
scanf("%d",&comp);
printf("enter marks of lang \t");
scanf("%d",&lang);
total_marks = chem+math+phys+comp+lang;
printf("\n total marks scored is %d",total_marks);
percentage = ((float)total_marks/500)*100;
printf("\n percentage is %f \n",percentage);
if (percentage > 40)
{ 
	printf("\n PASS \n");
	}
else{
	printf("\n FAIL \n");
	}
}

