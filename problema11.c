/*Angeles Pe´rez Abril Monserrat
Ejercicio 11
Tarea 2*/

#include <stdio.h>

int main ()
{
  int i, suma = 0;
  
  for(i = 0; i <= 50; i = i + 2)
  {
    suma = suma + i;
  }
  
  printf("La suma es %d\n", suma);
  
  return 0;
}
