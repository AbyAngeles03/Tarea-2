/* Angeles Pérez Abril Monserrat
Ejercicio 7
Tarea 2*/

#include <stdio.h>

int main ()
{
  float distancia, distotal, precio;
  int dias;
  
  printf("Proporcione la distancia de ida: \n");
  scanf("%f", &distancia);
  printf("Proporcione los dias de estancia: \n");
  scanf("%d", &dias);
  
  distotal = distancia * 2;
  precio = distotal * 0.23;
  
  if(dias > 7 && distotal > 800)
  {
    precio = precio * 0.70;
  }
  else
  {
    precio = precio;
  }
    printf("Distancia recorrida: %.2f\n", distotal);
    printf("Precio del boleto: %.2f\n", precio);
  return 0;
}
