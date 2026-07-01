#include <stdio.h>

int power(int base, int exponent);
int main(void)
{
  int i = 0;
  for (i = 0; i <10; i++)
  {
    printf("%d %d %d\n", i, power(2, i), power(-3,i));
  }
}

int power(int base, int exponent)
{
  int number = base;
  int power = exponent;
  int i = 1;
  if (exponent == 0 && base != 0)
  {
    base = 1;
    return base;
  }
  else
  {
    for (i = 1; i < power; i ++)
    {
      base = (base * number);
    }
    return base;
  }}