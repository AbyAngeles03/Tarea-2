/*Angeles Pérez Abril Monserrat
Ejercicio 14
Tarea 2*/

#include <stdio.h>

int main()
{
  int nums[100], N, i, buscar, cont = 0;

  printf("Cantidad de numeros que tendrá el arreglo: \n");
  scanf("%d", &N);

  for(i = 0; i < N; i++)
  {
    printf("Proporcione un  numero; \n");
    scanf("%d", &nums[i]);
  }

  printf("Numero a buscar: \n");
  scanf("%d", &buscar);

  for(i = 0; i < N; i++) 
  {
    if(nums[i] == buscar)
    {
      cont= cont + 1;
    }
  }

  printf("Cantidad de veces que se repite: %d\n", cont);

  return 0;
}
