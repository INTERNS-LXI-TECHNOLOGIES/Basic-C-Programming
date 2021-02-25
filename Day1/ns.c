/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
char a[20],desig[30];
int bp,ns,pf,hra=500,da;
printf("name: \n designation: \n bp: \n");
scanf("%s %s %d",&a,&desig,&bp);
printf("name:%s desig:%s bp: %d",a,desig,bp);
if(bp<10000)
{
da=bp*60/100;
pf=bp*50/100;
ns=bp+da+hra-pf;
printf("ns: %d",ns);
}
else if(bp>=10000)
{
da=bp*75/100;
pf=bp*20/100;
ns=bp+da+hra-pf;
printf("ns: %d",ns);
}
else 
printf("not found");
    return 0;
}
