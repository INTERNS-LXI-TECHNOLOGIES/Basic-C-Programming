#include <stdio.h>
struct array 
{
int l; int a[10];
};
void sort (struct array);
void main()
{
    int i;
    struct array ar;
    printf("\n\n Enter the limit : ");
    scanf("%d", &ar.l);
    printf("\n Enter the elements\n");
    for ( i = 0; i < ar.l; i++ )
    {
        scanf("%d", &ar.a[i]);
    }
    sort (ar);
}
void sort(struct array ar)
{
    int x, i, j;
    printf(" Sorted array : ");
    for(i=0;i<ar.l;i++)
    {
        for (j=i + 1; j < ar.l; j++ )
        {
            if ( ar.a[i] < ar.a[j] )
            {
                x = ar.a[i];
                ar.a[i] = ar.a[j];
                ar.a[j] = x;
            }
        }
    }
    for (i = 0; i < ar.l; i++)
    {
        printf("\n %d", ar.a[i]);
    }
}