//14.    To generate Strong number from 100 to 1000

#include<stdio.h> 
int main()
{
    int n,i,f,r,s=0,temp;
    printf("\n Enter the No. between 100 & 1000 : ");
    scanf("%d",&n);
    // temp=n;
    
    if (n<100 || n>1000)
    {
        printf("\n Invalid Entry.");
    }
    else
    {
        temp=n;
        while(n)
    {
        i=1,f=1;
        r=n%10;
        
        while(i<=r)
        {
            f=f*i;
            i++;
        }
        s=s+f;
        n=n/10;
    }
    if(s==temp)
    printf("\nThe number %d is a strong number",temp);
    else
    printf("\nThe number %d is not a strong number",temp);
    }
    return 0;
}