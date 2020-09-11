#include <stdio.h>
int string_length(char s[10], int l);

int main()
{
  char s[10];
  int l = 0;
printf("enter the string \n");
scanf("%s",s);

  printf("Length = %d\n", string_length(s,l));

  return 0;
}

int string_length(char s[10], int l) {
  if (s[l] == '\0') {
  return l;}
  else{
  l++;
  return (string_length(s,l));}
}
