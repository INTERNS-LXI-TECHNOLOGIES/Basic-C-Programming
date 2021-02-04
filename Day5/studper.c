#include <stdio.h>

 struct student 
{
  

char name[30];
   
int marks[5];
   
int total;
   
float percentage;
 

};

 
 
int 
main () 
{
  
 
struct student std;
  
 
int i;
  
 
 
printf ("Enter name: ");
  
 
scanf ("%s", &std.name);
  
 
 
printf ("Enter marks:\n");
  
 
std.total = 0;
  
 
for (i = 0; i < 5; i++)
    
 
    {
      
 
printf ("Marks in subject %d: ", i + 1);
      
 
scanf ("%d", &std.marks[i]);
      
 
std.total += std.marks[i];
    
 
}
  
 
std.percentage = (float) ((float) std.total / (float) 500) * 100;
  
 
 
 
printf ("\nName :%s ", std.name);
  
 
printf ("\nTootal Mark :%d ", std.total);
  
 
printf ("\nPercentage :%f ", std.percentage);

 
 
 
 
 
} 
