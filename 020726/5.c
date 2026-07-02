//prime again

#include <stdio.h>
int isPrime(int input);
int hasFracPart(int victim, int attack );
int main(void){
  int i = 0;
  for (i = 1; i <= 100; i++)
  {
    if (isPrime(i) == 1)
    {
      printf("%d \n", i);
    }
  }
}
int isPrime(int input)
{
  if (input < 2)
  {
    return 0;
  }
  else
  {
    int iteration = 1;
    int counts = 0;
    while (counts != 3 && (iteration <= input))
    {
      if (hasFracPart(input, iteration) == 1)
      {
        counts++;
        iteration++;
      }
      else
      {
        iteration++;
      }
    }
      if (counts != 2)
      {
        return 0;
      }
      else
      {
        return 1;
      }
    }
  }


int hasFracPart(int victim, int attack )
{
  float getFractionalPart = ((victim * 1.0)/(attack * 1.0));
  int   truncateFraction = getFractionalPart;
  if ((getFractionalPart - truncateFraction) == 0.0)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}