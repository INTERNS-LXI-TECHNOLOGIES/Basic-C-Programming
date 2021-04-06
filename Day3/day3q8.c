#include <stdio.h>
#include <string.h>
 
int main()
{
    char sentence[1000];  
    int i,limit;
 
    printf("Enter  the string : ");
    gets(sentence);
    
 printf("Enter limit above 200 :\n");
 scanf("%d\n",&limit);
     
    for(i=0;sentence[i]<limit;i++)  
    {
        if(sentence[i]>=65 && sentence[i]<=90)
         sentence[i]=sentence[i]+32;
        else if(sentence[i]>=97 && sentence[i]<=122)
         sentence[i]=sentence[i]-32;
 	}
 	
     
    printf("end result is \n %s",sentence);
 
 
    
}

