/*Angeles Pérez Abril Monserrat
Ejercicio 12
Tarea 2*/

#include <stdio.h>

int main()
{
  int producto = 1, i, N;

  printf("Proporcione la cantidad de numeros: \n");
  scanf("%d", &N);

  for(i = 1; i <= N; i++)
  {
    producto = producto * i;
  }
  printf("Producto: %d\n", producto);

  return 0;
}
