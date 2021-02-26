/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*..//******************************************************************************/

#include <stdio.h>

int main()
{
char a,desig;
int bp,ns,pf,hra=500,da;
printf("name: \n ");
scanf("%s",&a);
printf("designation: \n");
scanf("%s",&desig);
printf("bp: \n");
scanf("%d",&bp);
 if(bp<10000)
{
da=bp*0.6;
pf=bp*0.5;
ns=bp+da+hra-pf;

}
else if(bp>=10000)
{
da=bp*0.75;
pf=bp*0.2;
ns=bp+da+hra-pf;
}

else 
{
printf("not found");

} 
printf("ns: %d",ns);
return 0;

}
