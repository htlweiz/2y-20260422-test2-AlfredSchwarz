/// Programm 3
/// Alfred Schwarz
/// 23.04.2026
#include <inttypes.h>
#include <stdio.h>
#include <math.h>

double Celsius2Fahrenheit(double temp_celsius)
{
  double celsius2fahrenheit = 0;
  celsius2fahrenheit = (temp_celsius * (9 / 5)) + 32;
  return celsius2fahrenheit;
}

int main(void)
{
  double temp_celsius = 0;

  printf("Temperatur in Grad Celsius:");
  scanf("%lf", &temp_celsius);

  printf("Temperatur in Grad Fahrenheit:%lf", Celsius2Fahrenheit(temp_celsius));

  return 0;
}
