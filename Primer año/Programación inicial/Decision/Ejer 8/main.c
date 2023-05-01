#include <stdio.h>

int main() {
  int num1, num2;

  printf("Ingrese el primer numero: ");
  scanf("%d", &num1);

  printf("Ingrese el segundo numero: ");
  scanf("%d", &num2);

  if (num2 != 0 && num1 % num2 == 0) {
    printf("%d es divisible por %d\n", num1, num2);
  } else {
    printf("%d no es divisible por %d\n", num1, num2);
  }

  return 0;
}