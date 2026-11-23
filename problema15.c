/*Angeles Pérez Abril Monserrat
Ejercico 15
Tarea 2*/

#include <stdio.h>

int main()
{
  int nums[100], N, i;
  int positivos = 0, negativos = 0, nulos = 0;

  printf("Cantidad de numeros a ingresar: \n");
  scanf("%d", &N);

  for(i = 0; i < N; i++)
  {
    printf("Proporcione un numero: \n");
    scanf("%d", &nums[i]);
  }
  
  for(i = 0; i < N; i++)
  {
    if(nums[i] > 0)
    {
      positivos = positivos + 1;
    }
    else
    {
      if(nums[i] < 0)
      {
        negativos = negativos + 1;
      }
      else  
      {
        nulos = nulos + 1;
      }
    }
  }

  printf("Positivos: %d\n", positivos);
  printf("Negativos: %d\n", negativos);
  printf("Nulos: %d\n", nulos);

  return 0;
}
