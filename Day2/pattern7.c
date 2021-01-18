#include <stdio.h>
void  main()
{
  int n, i, c, a = 1;

  printf("Enter the number \n");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    for (c = 1; c <= i; c++)
    {
      printf("%d ",a);
      a++;
    }
    printf("\n");
  }

  
}