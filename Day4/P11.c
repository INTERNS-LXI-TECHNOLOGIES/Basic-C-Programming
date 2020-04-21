#include<stdio.h>

void Sort(int a[10]) ;

int main()
{
    int arr[10];

    for(int i=0;i<10;i++)
    {
        printf("\n Input Number %d : ",i+1) ;
        scanf("%d",&arr[i]) ;
    }

   Sort(arr);

}

void Sort(int a[10])
{
   int temp;

    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if (a[i] <a[j])
                {
                    temp =  a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
        }

    }
   printf("\n \n Sorted Array in Descending Order : { ") ;
   for(int i=0;i<10;i++)
   {
       printf("%d ",a[i]) ;
   }
   printf("}") ;
}