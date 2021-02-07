#include <stdio.h>
struct array 
{
int limit;int ar[10];
};
void search (int,struct array);
void main()
{
    int x, i;
    struct array loc;
    printf("\n Enter the limit : ");
    scanf("%d", &loc.limit);
    printf("\n Enter the elements \n");
    for ( i = 0; i < loc.limit; i++ )
    {
        scanf("%d", &loc.ar[i]);
    }
    printf("\n Enter the element to search : ");
    scanf("%d", &x);
    search (x,loc);   
}
void search ( int find, struct array loc )
{
    int i, j, y = 0 ;

    for ( i = 0; i < loc.limit; i++ )
    {
        for ( j = 0 + 1; j < loc.limit; j++ )
        {
            if ( find == loc.ar[i] )
            {
                printf("\n Found at location : %d", i + 1 );
                y = 1;
              
            }  
        }  
    }
    if ( y < 1 )
    {
        printf("\n Not found...!\n\n");
    }  
}