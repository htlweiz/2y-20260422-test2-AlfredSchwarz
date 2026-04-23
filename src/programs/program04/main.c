/// \file
/// \author
/// \date

#include <inttypes.h>
#include <stdio.h>
#include <math.h>

double compute_hypotenuse(double leg_a, double leg_b)
{
  double hypotenuse = 0;
  hypotenuse = sqrt((leg_a * leg_a) + (leg_b * leg_b));
  return hypotenuse;
}

int main(void)
{
  double leg_a = 0, leg_b = 0;

  printf("Geben Sie die Länge a ein:");
  scanf("%lf", &leg_a);
  printf("Geben Sie die Länge b ein:");
  scanf("%lf", &leg_b);

  printf("%lf", compute_hypotenuse(leg_a, leg_b));

  return 0;
}
