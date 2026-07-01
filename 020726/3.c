#include <stdio.h>

#define low 0
#define up 100
#define step 5
float celsToFahr (int celsius);
float fahrToCels(int fahrenheit);
int main(void)
{

  printf("FAHR\tCELS\n");
  int fahr = low;
  for (fahr = low; fahr <= up; fahr = fahr + step)
  {
    printf("%3d\t\t%3.3f\n",fahr, fahrToCels(fahr));
  }

  printf("CELS\tFAHR\n");

  int cels = low;
  for (cels = low; cels <= up; cels = cels + step)
  {
    printf("%3d\t\t%3.3f\n",cels, celsToFahr(cels));
  }

  return 0;
}
float fahrToCels(int fahrenheit)
{
  float celsius = ((fahrenheit - 32.0) * (5.0/9.0));
  return celsius;
}

float celsToFahr (int celsius)
{
  float celsiusX = celsius * 1.0;
  float fahrenheit =  ((celsiusX * (9.0/5.0))+ 32.0);
  return fahrenheit;
}