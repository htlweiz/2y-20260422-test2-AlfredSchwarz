/// \file
/// \author
/// \date

#include <inttypes.h>
#include <stdio.h>
#include <math.h>

double Celsius2Fahrenheit (double temp_celsius){
  double celsius2fahrenheit = 0;
  celsius2fahrenheit = (temp_celsius * (9/5)) + 32;
  return celsius2fahrenheit;
}

int main(void) {
  double temp_celsius = 0;

  printf("Geben Sie eine Temperatur in Grad Celsius ein:");
  scanf("%lf", &temp_celsius);

  printf("%lf", Celsius2Fahrenheit(temp_celsius));

  return 0;
}
