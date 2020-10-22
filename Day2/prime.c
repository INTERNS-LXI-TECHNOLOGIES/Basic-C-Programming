//5.   To generate the prime numbers lying between the two numbers a & b given by the user.

#include <stdio.h>
int main() 
{
  int x, y, i, flag;
  printf("\n Enter two numbers (intervals): ");
  scanf("%d %d", &x, &y);
  printf("\n Prime numbers between %d and %d are: ", x, y);

  while (x < y) 
  {
    flag = 0;

    if (x <= 1) 
    {
      ++x;
      continue;
    }

    for (i = 2; i <= x / 2; ++i) 
    {
      if (x % i == 0) {
      flag = 1;
      break;
    }
  }

  if (flag == 0)
  printf("%d, ", x);
  ++x;
  }
  return 0;
}