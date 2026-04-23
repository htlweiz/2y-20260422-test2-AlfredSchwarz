/// Programm 4
/// Alfred Schwarz
/// 23.04.2026

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

  printf("Länge der Kathete a:");
  scanf("%lf", &leg_a);
  printf("Länge der Kathete b:");
  scanf("%lf", &leg_b);

  printf("Länge der Hypotenuse:%lf", compute_hypotenuse(leg_a, leg_b));

  return 0;
}
