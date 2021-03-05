/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int x,y,z;
   printf("pythagorieans triples from 1 to 100 \n");
   for(x=1;x<=100;x++)
   {
       for(y=x+1;y<=100;y++)
       {
           for(z=y+1;z<=100;z++)
           {
               if((x*x)+(y*y)==(z*z))
               printf("(%d %d %d)",x,y,z);
           }
       }
   }
    return 0;
}
