/*Angeles Pérez Abril Monserrat
Ejercicio 9
Tarea 2*/

#include <stdio.h>

int main()
{
  int num, i, res;
  printf("Proporciona un numero: \n");
  scanf("%d", &num);
  
  for(i = 1; i <= 10; i++)
  {
    res = num * i;
    printf("%d * %d = %d\n", num, i, res);
  }
  return 0;
}
