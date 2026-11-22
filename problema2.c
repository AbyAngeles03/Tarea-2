/*Angeles Pérez Abril Monserrat
Ejercicio 2 
Tarea 2*/

#include <stdio.h>
#define PI 3.1416
int main()
{
  float radio, area, circunferencia;

  printf("Proporciona el valor del radio del circulo: \n");
  scanf("%f%", &radio);
  
  area = PI * radio * radio;
  circunferencia = 2 * PI * radio;
  
  printf("El area de la circulo es: %f\n", area);
  printf("La circunferencia es: %f\n", circunferencia);
  
  return 0;
}
