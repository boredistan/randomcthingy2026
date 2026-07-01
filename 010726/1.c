#include <stdio.h>

int main(void)
{
  int arrayOfChars[512];
  int i = 0;
  for (i = 0; i < 512; i++)
  {
    arrayOfChars[i] = 0;
  }
  int inputOfCharacter = 0;
  while ((inputOfCharacter = getchar())!= '\n')
  {
    arrayOfChars[inputOfCharacter]++;
  }
  printf("\n note that new lines will not be included in the histogram \n");
  int j = 0, k = 0;
  for (i = 0; i < 512; i++)
  {
    if (arrayOfChars[i] != 0 && arrayOfChars[i] != '\n') //sadly this is a bug but hey atleast I won 
    {
      printf("\n");
      putchar(i);
      k = arrayOfChars[i];
      for (j = 0; j < k; j++)
      {
        printf("=");
      }

    }
  }

  printf("\n");
  return 0;
}