#include<stdio.h>
#include<math.h>
main()
{
	int i,j,y,x,n,c=1;
	printf("Enter the n :\t");
	scanf("%d",&n);
    for (i = 1; i <= n; i++) 
	{ 
        for (j = i; j <= n;j++) 
		{ 
            x = (i*i)+(j*j); 
            y = sqrt(x); 
            if ( y*y==x && y <= n) 
            {
			
                printf("Triplet %d => ", c);
				printf("(%d, %d, %d)\n",i,j,y);
                c++;
            }
        } 
    } 
  
}
