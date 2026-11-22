/*Angeles Pérez Abril Monserrat
Ejercicio 4
Tarea 2*/

#include <stdio.h>

int main()
{
  float dinero, tasa, interes, total;

  printf("Proporcione la cantidad: \n");
  scanf("%f", &dinero);
  printf("Tasa de interés: \n");
  scanf("%f", &tasa);

  interes = dinero * (tasa/100);
  total = dinero + interes;

  printf("Cantidad después de aplicar el interés: %f\n", total);
  
  return 0;
}
  
  
  
