#include <stdio.h>

int main()
{
    int a, b, max_Value;

    printf("Please Enter two integer Values \n");
    scanf("%d %d", &a, &b);
    
    max_Value = (a >b)? a : b;
    
    while(1) 
    {
    	if(max_Value % a== 0 && max_Value % b == 0) 
    	{
    		printf("LCM of %d and %d = %d", a, b, max_Value);
    		break;
		}
		++max_Value;
	}
    return 0;
}