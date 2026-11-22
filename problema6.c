/*Angeles Pérez Abril Monserrat 
Ejercicio 6
Tarea 2*/

#include <stdio.h>

int main()
{
  float sueldo, aumento, sueldoneto;

  printf("Proporcione el sueldo: \n");
  scanf("%f", &sueldo);

  if(sueldo < 1000)
  {
    aumento = sueldo * 0.15;
    sueldoneto = sueldo + aumento;
    printf("Sueldo con aumento incorporado: %.2f\n", sueldoneto);
  }
 else
  {
    aumento = sueldo * 0.12;
    sueldoneto = sueldo + aumento;
    printf("Sueldo con aumento incorporado: %.2f\n", sueldoneto);
  }
  return 0;
}
