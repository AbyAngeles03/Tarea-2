/*Angeles Pérez Abril Monserrat 
Ejercicio 1
Tarea 2*/

# include <stdio.h>

int main ()
{
  float num1, num2, suma, rest, multi;

  printf("Proporciona un numero: \n");
  scanf("%f", &num1);
  printf("Proporciona un segundo numero: \n");
  scanf("%f", &num2);
  suma = num1 + num2;
  rest = num1 - num2;
  multi = num1 * num2;
  printf("El resultado de la suma es: %f\n", suma);
  printf("El resultado de la resta es: %f\n", rest);
  printf("El resultado de la multiplicación es: %f\n", multi);
  return 0;
}



