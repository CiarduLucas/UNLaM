#include <stdio.h>

int main() {
  int num1, num2, num3, temp;

  printf("Ingrese tres numeros: ");
  scanf("%d %d %d", &num1, &num2, &num3);

  // Ordenar los numeros de menor a mayor
  if (num1 > num2) {
    temp = num1;
    num1 = num2;
    num2 = temp;
  }

  if (num1 > num3) {
    temp = num1;
    num1 = num3;
    num3 = temp;
  }

  if (num2 > num3) {
    temp = num2;
    num2 = num3;
    num3 = temp;
  }

  printf("Los numeros ordenados son: %d, %d, %d", num1, num2, num3);

  return 0;
}