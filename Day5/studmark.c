#include<stdio.h>
struct student 
{
  
int sub1;
   
int sub2;
   
int sub3;
 
};

void
main () 
{
  
struct student s[10];
  
int i, total = 0;
  
for (i = 0; i <= 2; i++)
    
    {
      
printf ("\nEnter Marks in Subject 1 :");
      
scanf ("%d", &s[i].sub1);
printf ("\nEnter Marks in Subject 2 :");
scanf ("%d", &s[i].sub2);
printf ("\nEnter Marks in Subject 3 :");
scanf ("%d", &s[i].sub3);

      
total = s[i].sub1 + s[i].sub2 + s[i].sub3;
      
printf ("\nTotal marks of s[%d] Student= %d", i, total);
    
}
  
}


 
