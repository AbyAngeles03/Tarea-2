/*Angeles Pérez Abril Monserrat
Ejercicio 10
Tarea 2*/

#include <stdio.h>

int main ()
{
  int num, i;
  int positivo = 0, negativo = 0, nulo = 0;
  for(i = 0; i <= 100; i++)
  {
    printf("Ingrese un numero: \n");
    scanf("%d", &num);

    if(num > 0)
    {
      positivo++;
    }
    else 
    if(num < 0)
    {
      negativo++;
    }
    else
    {
      nulo++;
    }
  }
  printf("Positivos: %d\n", positivo);
  printf("Negativos: %d\n", negativo);
  printf("Nulos: %d\n", nulo);
  return 0;
}
