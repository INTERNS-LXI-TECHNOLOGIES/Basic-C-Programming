#include <stdio.h>
 
main()
{
    int n,i;
    int s;
    char ch;
    do
    {
    	printf("Enter an integer number: ");
	    scanf("%d",&n);
	    s=0;
	    for(i=1; i<n;i++)
	    {
	        if(n%i==0)
	            s+=i;
	    }
	 
	    if(s==n)
	        printf("%d is a perfect number \n",n);
	    else
	        printf("%d is not a perfect number \n",n);
		printf("Do you need to continue (y/n)");
		scanf("%c");
		scanf("%c",&ch);	 
	    	
	}while(ch=='y');
 
    
}
