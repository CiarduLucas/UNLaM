#include <stdio.h>

int main() {
  float lado1, lado2, lado3;

  printf("Ingrese el valor del primer lado: ");
  scanf("%f", &lado1);

  printf("Ingrese el valor del segundo lado: ");
  scanf("%f", &lado2);

  printf("Ingrese el valor del tercer lado: ");
  scanf("%f", &lado3);

  // Verificar si los valores ingresados forman un triángulo
  if (lado1 > 0 && lado2 > 0 && lado3 > 0 && 
      lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {
    printf("Los valores ingresados forman un triangulo.\n");
  } else {
    printf("Los valores ingresados no forman un triangulo.\n");
  }

  return 0;
}