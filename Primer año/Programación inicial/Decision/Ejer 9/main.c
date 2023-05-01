#include <stdio.h>

int main() {
  char letra;

  printf("Ingrese un caracter: ");
  scanf("%c", &letra);

  if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
      letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
    printf("VOCAL\n");
    printf("Valor numerico en ASCII: %d\n", letra);
  } else {
    printf("NO ES VOCAL\n");
  }

  return 0;
}
