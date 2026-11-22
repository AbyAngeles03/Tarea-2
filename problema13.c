/* Angeles Pérez Abril Monserrat
Ejercico 13
Tarea 2*/

#include <stdio.h>

int main()
{
  int nums[100], N, i, suma = 0;
  
  printf("Cantidad de numeros a ingresar: \n");
  scanf("%d", &N);
  
  for(i = 0; i < N; i++)
  {
    printf("Proporcione un numero:\n");
    scanf("%d", &nums[i]);
  }
  
  for(i = 0; i < N; i++)
  {
    suma = suma + nums[i];
  }
  
  printf("La suma es: %d\n", suma);

  return 0;
}
