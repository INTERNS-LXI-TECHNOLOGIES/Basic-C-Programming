#include <stdio.h>
int main()
//printf("\n****Program to check percentage and grade of students****\n");
{
printf("\nEnter your marks out of hundred\n");
printf("\nphysics\n");
float physics;
scanf("%f",&physics);
printf("\nchemistry\n");
float chemistry;
scanf("%f",&chemistry);
printf("\nenglish\n");
float english;
scanf("%f",&english);
printf("\ncomputer\n");
float computer;
scanf("%f",&computer);

//calucating percentage

float percentage;
percentage=(physics+chemistry+english+computer)/4;

printf("%.2f is the percentage\n\n" ,percentage);

// method to find grade
char grade,a,b,c,d,fail;

grade=(90<percentage)?'a':(80<percentage)?'b':(70<percentage)?'c':(60<percentage)?'d':'fail';
printf("%c is the grade ",grade);
}

