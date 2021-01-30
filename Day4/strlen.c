#include <stdio.h>
int len(char s[10], int l);
int main()
{
  char s[10];
  int l = 0;
printf("enter the string \n");
scanf("%s",s);
  printf("Length=%d\n",len(s,l));
  return 0;
}
int len(char s[10], int l) 
{
  if (s[l]=='\0') 
  {
  return l;
  }
  else
  {
  l++;
  return (len(s,l));
  }
}