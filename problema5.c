/*Angeles Pérez Abril Monserrat
Ejercicio 5
Tarea 2*/

#include <stdio.h>

int main()
{
  float compra, descuento, total;
  printf("Proporcione el monto de la compra: \n");
  scanf("%f", &compra);

  if(compra > 2500)
  {
    descuento = compra * 0.08;
    total = compra - descuento;
    
    printf("Descuento: %.2f\n", descuento);
    printf("Total a pagar: %.2f\n", total);
  }
  else
  {
    printf("No se aplica descuento");
  }

  return 0;
}
