#include <stdio.h>
int main()
{
int a,b,n,c;

printf("Input Natural Number n ");
scanf("%d",&n);

for(a=1;a<=n;a++)
    for(b=1;b<=n;b++)
    
    for (c=1;c<=n; c++)

        if(a<b && a*a + b*b == c*c)
        {
            printf("(%d, %d, %d)\n",a,b,c);
        }
         
        return 0;
        }

