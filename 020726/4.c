//prime number
#include <stdio.h>
int isPrime(int input);
int main(void)
{
  int i = 0;
  for (i = 1; i<100; i++)
  {
    if (isPrime((i)) == 1)
    {
      printf("%d\n", i);
    }
  }

  return 0;
}

int isPrime(int input)
{
  if (input < 2)
  {
    return 0;
  }
  else
  {
    int i = 0;
    int countOfDivisible = 0;
    for (i = 1; i<=input; i ++)
    {
      float realDivided = ( ((input * 1.0)/(i * 1.0)) * 1.0);
      int fakeDivided = realDivided;
      float fractionalPart = (realDivided) - (fakeDivided);
      if (fractionalPart == 0.0)
      {
        countOfDivisible++;
      }
    }
    if (countOfDivisible == 2)
    {
      return 1;
    }
    else
    {
      return 0;
    }

  }

}