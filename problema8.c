/* Angeles Pérez Abril Monserrat
Ejercicio 8
Tarea 2*/

#include <stdio.h>

int main()
{
  int num1, num2;
  printf("Proporciona un numero: \n");
  scanf("%d", &num1);
  printf("Proporciona un segundo numero: \n");
  scanf("%d", &num2);
  if(num2 != 0 && num1 % num2 == 0)
  {
    printf("%d es divisor de %d", num2, num1);
  }
  else
  {
    printf("%d no es divisor de %d", num2, num1);
  }
  
  return 0;
}
