#include <stdio.h>
int powers(int base, int exponent);
int main(void)
{
  int i = 0;
  for (i = 0; i < 10; i ++)
  {
    printf("%d\t%d\t%d\n",i, powers(2, i), powers(-3, i));
  }
  return 0;
}

int powers(int base, int exponent)
{
  int i = 0, n = 1 ;
  for (i = 1; i <= exponent; i ++)
  {
    n = n * base;
  }
  return n;
}