#include <stdio.h>

int main() {
  int num1, num2, num3, num4;
  int menor, orden;

  printf("Ingrese el primer numero: ");
  scanf("%d", &num1);

  printf("Ingrese el segundo numero: ");
  scanf("%d", &num2);

  printf("Ingrese el tercer numero: ");
  scanf("%d", &num3);

  printf("Ingrese el cuarto numero: ");
  scanf("%d", &num4);

  // Determinar el menor valor y su número de orden
  menor = num1;
  orden = 1;

  if (num2 < menor) {
    menor = num2;
    orden = 2;
  }

  if (num3 < menor) {
    menor = num3;
    orden = 3;
  }

  if (num4 < menor) {
    menor = num4;
    orden = 4;
  }

  // Mostrar los valores ingresados y el menor valor identificado
  printf("Los valores ingresados son: %d, %d, %d, %d\n", num1, num2, num3, num4);
  printf("El menor valor es %d y su numero de orden es %d\n", menor, orden);

  return 0;
}