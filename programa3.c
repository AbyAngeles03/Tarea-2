/*Angeles Pérez Abril Monserrat
Ejericio 3
Tarea 2*/

#include <stdio.h>
#define Peso 11.96

int main()
{
  float dolar, pesos, conver;

  printf("Cantidad en dolares: \n");
  scanf("%f", &dolar);

  pesos = dolar * Peso;

  printf("Cantidad en pesos: &f\n", pesos);

  return 0;
}
